/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/9
 */
#include <stdio.h>
#include <stdlib.h>

// 最大次元数
#define MAX 10

// 多項式の次数と繰り返し回数
static int n, count;

// 係数
static double c[MAX+1];

// 範囲 a <= n <=b　または　b <= n <=a　と誤差の限界e
static double a, b, e;

// サンプル入力を与えるメイン関数。
int main(void);

// 次数と多項式の入力と表示を行う関数。
void input(void); 

// 範囲と誤差の入力と表示を行う関数。
void range_err(void); 

// 二分法による近似解の計算を行う関数。
double bisection(void);

// 答えの出力を行う関数。
void output(double);

// 計算する関数。
double f(double);
