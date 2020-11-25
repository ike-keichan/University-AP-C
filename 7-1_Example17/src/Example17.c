#include "defs.h"

// 配列の動的確保の例題関数。
void example17(void)
{
    int number;
    double *dp, *tp;

    scanf("%d", &number);
    printf("n = %d\n", number);
    
    dp = (double *)malloc(sizeof number);

    if (dp == NULL){
        printf("Error\n");
        return;
    }

    tp = dp;
    for(int index = 0; index < number; index++)
    {
        scanf("%lf", tp);
        printf("%d: %d\n", index, (int)*tp);
        tp++;
    }

    tp = dp;
    for(int index = 0; index < number; index++)
    {
        printf("%d: %lf\t%lf\n", index, *tp++, dp[index]);
    }

    return;
}
