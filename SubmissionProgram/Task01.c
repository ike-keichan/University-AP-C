/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：9/25
 */
#include <stdio.h>

// 1から入力値まで各値の「1からの総和」と「階乗」を表示する関数
int main(void)
{
    int n;

    scanf("%d", &n);

    int k_sum[n]; //1からの総和の値を代入する配列
    int k_factorial[n]; //階乗の値を代入する配列

    //それぞれの配列（計算表）を構築する。
    for(int index = 0; index < n; index++){
        if(index == 0){ 
            k_sum[0] = 1; 
            k_factorial[0] = 1; 
        }else {
            k_sum[index] = k_sum[index-1] + (index+1);
            k_factorial[index] = k_factorial[index-1] * (index+1);
        }
    }

    //ヘッダを表示。
    printf("           k        ksum          k!\n");

    //構築した配列（計算表）を表示する。
    for(int k = 1; k <= n; k++){
        printf("%12d%12d%12d\n", k, k_sum[k-1], k_factorial[k-1]);
    }

    return 0;
}

/**
 * 作成したプログラムのリスト：
 * ・Task01.c
 * 
 * 実行結果：
 * 2
 *        k        ksum          k!
 *        1           1           1
 *        2           3           2
 * 
 * 5
 *        k        ksum          k!
 *        1           1           1
 *        2           3           2
 *        3           6           6
 *        4          10          24
 *        5          15         120
 * 
 * 15
 *        k        ksum          k!
 *        1           1           1
 *        2           3           2
 *        3           6           6
 *        4          10          24
 *        5          15         120
 *        6          21         720
 *        7          28        5040
 *        8          36       40320
 *        9          45      362880
 *       10          55     3628800
 *       11          66    39916800
 *       12          78   479001600
 *       13          91  1932053504
 *       14         105  1278945280
 *       15         120  2004310016
 * 
 * 問題の説明：
 * 作成したプログラムが、正しい答えを出す最大のkの値は12である。
 * 13!は6227020800だが、出力結果は1932053504となっており、出力結果が誤っている。
 * このような結果になる理由として変数の型、「int」の扱えるデータ容量にある。
 * 「int」は4byte（=32bit）の整数値のみを扱える。
 * つまり、-2147483648~2147483647の範囲の値しか扱えない。
 * そのため、この範囲を超える13!以上の階乗の値は正しく出力されないのである。
 * よって、正しい答えを出す最大のkの値は12となる。
 *  
 * プログラムの動作説明：
 * 1から入力値まで各値の「1からの総和」と「階乗」を表示するプログラム。
 * 宣言する変数はn,k_sum[n],k_factorial[n]の３つである。
 * nはscanf関数で受け取った入力値を代入する。
 * k_sum[n]は1からの総和の値を,k_factorial[n]階乗の値を代入する配列である。
 * 最初のforループでk_sum[n],k_factorial[n]を作成する。
 * 次のforループでk_sum[n],k_factorial[n]の中身を表示する。
 * 
 * 工夫した点：
 * 今回のプログラムでは最初、再帰を用いることを検討したが、計算量が膨大になるのを避けるために使用を避けた。
 * 今回のプログラムでは最初に1~nまでのそれぞれの配列を作成することにより、k_sum[n],k_factorial[n]の値をそれぞれ1回だけ求めれば良い。
 * 
 * 入力値が5の時、再帰を用いた場合、
 * forループ内の処理が5回実行される。
 * n=5の値を求めるのにn=1~5の値をそれぞれ求める必要があり、計算回数は５回になる。
 * n=4で4回、n=3で3回、n=2で2回、n=1で1回の計算回数が必要になり、合計15回の計算が必要になる。
 * 今回は二つの値を同様の手順で求めるので合計30回の計算が必要になる。
 * 
 * しかし、今回の計算表を用いた場合、
 * forループ内の処理が5回実行される。
 * n=5の値を求めるのにn=1~5の値をそれぞれ求める必要があり、計算回数は５回になる。
 * この時に、同時にn=1~4の値も同時に求めるため、合計5回の計算で事足りる。
 * 今回は二つの値を同様の手順で求めるので合計10回の計算で事足りる。
 * 
 * このように計算回数がおよそ3倍も変わるため、今回は再帰を用いずにプログラムを作成した。
 * 
 * 考察：
 * 上記のような工夫点（理由）から今回は再帰を用いなかった。
 * しかし、計算回数が少ない場合はプログラムの処理時間（計算回数ではない）は大差ない。
 * また、記述量や可読性、可変性を考えた時、今回の実装方法は良いと断言できない。
 * 用途に合わせてアルゴリズムを記述できることが好ましいと私は考える。
 * 
 * 感想：
 * 4回生の池田敬祐です。半年間よろしくお願いします。
 * 4回生で本授業を受講していますが、Cを書くこと（読むことはありました）がとても久しぶりなのでやや混乱する反面、とても楽しくプログラミングができました。
 * 二点質問があります。
 * 一点目、コンパイル時の質問なのですが、コンパイルにgccでなく、clangを用いてはダメでしょうか？
 * 私が調べたところ、Mac内部ではgccとccはclangとほぼ同様の扱いになっているらしいので大きな差異はないと思います。
 * また個人の見解としてclangの方がgccより優れていると思っているのでclangでのコンパイルでよければclangを用いたいです。
 * 二点目、提出方法の質問なのですが、可能であれば、Makefileやヘッダファイルを用いたものまとめてフォルダにして、提出したいと考えています。
 * また個人的にはいちいち入力を与えるのも億劫なのでscanf関数を無視して、別の関数を用意し、関数呼び出し時に値を与えるなどして実行したいとも考えています。
 * しかし、これらを行ってしまうと授業資料で説明のあった提出方法を破ることになるため一度お聞きしておきたいと思って質問しました。
 * 以上、二点の質問、お手数ですがお答えいただけると助かります。
 * 
 * 疑問点：
 * 実際のところ、どのようなアルゴリズムが一番適しているのか気になりました。
 */ 
