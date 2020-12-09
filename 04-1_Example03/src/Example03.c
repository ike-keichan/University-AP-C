#include "defs.h"

// ポインタの例題関数。
void example03(void)
{
    double x = 1.25;
    int y = 65;
    char z = 'A';

    printf("x = %f\n", x);
    printf("y = %d\n", y);
    printf("z = %c\n", z);

    system("bash PrintThinSeparater.sh");

    printf("&x = %p\n", p2v(&x));
    printf("&y = %p\n", p2v(&y));
    printf("&z = %p\n", p2v(&z));

    system("bash PrintThinSeparater.sh");
    
    printf("sizeof(x) = %zd\n", sizeof(x));
    printf("sizeof(y) = %zd\n", sizeof(y));
    printf("sizeof(z) = %zd\n", sizeof(z));

    return;
}
