/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/7 -> 10/21
 */
#include "defs.h"

// 次元数と多項式の入力と表示を行う関数。
void input(void)
{
    // 次元数nの読み込み
    scanf("%d", &n);
    
    // 次元数nに問題があれば異常終了。
    if(n > MAX){ 
        printf("最大次元数を超えている\n");
        exit(1); 
    }else if(n < 0){
        printf("nが負\n");
        exit(2);
    }

    // 次元数nの表示
    printf("次元数：%d\n", n);

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

// 範囲とStepの入力と表示を行う関数。
void range(void)
{
    // 範囲の値a,bの読み込み
    scanf("%lf", &a);
    scanf("%lf", &b);

    // 範囲を整える。
    if(a > b){
        double temp = a;
        a = b;
        b = temp;
    }

    // 範囲の表示。
    printf(" 範囲 ：%2.0f <= n <= %2.0f\n", a, b);

    // 計算の間隔stepの読み込み
    scanf("%lf", &step);

    // 計算の間隔stepに問題があれば異常終了。
    if(step <= 0){
        printf("stepが0または負\n");
        exit(3);
    }

    // 計算の間隔stepの表示
    printf(" step ：%2.2f\n", step);

    return;
}

// 計算結果を表示する関数。
void calc(void)
{
    for(double x = a; x <= b + step/2; x += step){
        printf("f(%f) = %f\n", x, f(x));
    }

    return;
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
