#include "defs.h"

// 階乗の例題関数。
void example27(void)
{
    int number, answer;
    printf("number= ");
    scanf("%d", &number);
    answer = factorial(number);
    printf("%d! = %d\n", number, answer);
    
    return;
}

// 階乗を計算する関数。
int factorial(int number)
{
    if(number == 1){ return 1; }
    else{ return number * factorial(number-1); }
}
