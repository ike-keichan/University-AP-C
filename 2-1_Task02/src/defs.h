/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/7 -> 10/10
 */
#include <stdio.h>
#include <stdlib.h>

// 最大次元数
#define MAX 10

// 多項式の次数
static int n;

// 係数
static double c[MAX+1];

// 範囲 a <= n <=b　または　b <= n <=a　
static double a, b;

// 計算幅
static double step;

// サンプル入力を与えるメイン関数。
int main(void);

// 次数と多項式の入力と表示を行う関数。
void input(void); 

// 範囲とStepの入力と表示を行う関数。
void range(void); 

// 計算結果を表示する関数。
void calc(void); 

// 計算する関数。
double f(double);
