/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/9
 */
#include "defs.h"

// 次数と多項式の入力と表示を行う関数。
void input(void)
{
    // 次元数nの読み込み
    scanf("%d", &n);
    
    // 次元数nに問題があれば異常終了。
    if(n > MAX){ 
        printf("最大次元数を超えている\n"); 
        exit(1); 
    }else if(n < 0){ printf("nが負\n"); exit(2);}

    // 次元数nの表示
    printf(" 次元数 ：%d\n", n);

    // 多項式の各係数の読み込み
    for(int index = 0; index <= n; index++){
        scanf("%lf", &c[index]);
    }

    // 多項式の表示
    for(int index = 0; index <= n; index++){
        if(index == 0){ printf(" 多項式 ：f(x) = "); }
        if(c[index] == 0.0){
            // 何もしない。
        }else if(index == n  && c[index] > 0){
            printf("+%1.0f\n", c[index]);
        }else if(index == n  && c[index] < 0){
            printf("%1.0f\n", c[index]);
        }else if(c[index] > 0){
            printf("+%1.0fx^%1d ", c[index], n-index);
        }else {
            printf("%1.0fx^%1d ", c[index], n-index);
        }
    }

    return;
}

// 範囲と誤差の入力と表示を行う関数。
void range_err(void)
{
    // 範囲の値a,bの読み込み
    scanf("%lf", &a);
    scanf("%lf", &b);

    // 範囲の値a,bが０の場合、正常終了。
    if(f(a) == 0.0){ output(a); exit(EXIT_SUCCESS); }
    if(f(b) == 0.0){ output(b); exit(EXIT_SUCCESS); }

    // 範囲の値a,bに問題があれば異常終了。
    if(f(a)*f(b) > 0){ printf("初期値異常\n"); exit(3); }

    // 範囲を整える。
    if(a > b){
        double temp = a;
        a = b;
        b = temp;
    }

    // 範囲の表示。
    printf("  範囲  ：%2.0f <= n <= %2.0f\n", a, b);

    // 誤差限界eの読み込み
    scanf("%lf", &e);

    // 誤差限界eに問題があれば異常終了。
    if(e <= 0){ printf("eが0または負\n"); exit(4); }

    // 誤差限界eの表示
    printf("誤差限界：%f\n", e);

    return;
}

// 答えの出力を行う関数。
void output(double x)
{
    printf("f(%f) = %f %d\n", x, f(x), count);

    return;
}

// 二分法による近似解の計算を行う関数。
double bisection(void)
{
    double d;

    while(b-a > e){
        count++;
        d = (a+b)/2;
        if(f(d) == 0.0){ return d; }
        if(f(a)*f(d) < 0){
            b = d;
        }else if(f(b)*f(d) < 0){
            a = d;
        }
    }
    
    return a;
}

// 計算する関数。
double f(double x)
{
    double y = c[0];

    for(int index = 1; index <= n; index++){
        y = y*x + c[index];
    }

    return y;
}
