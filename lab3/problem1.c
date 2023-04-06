#include <stdio.h>
#include <stdlib.h>

int main ()
{
    union {
        double d;
        unsigned long long u;
    } p;

    p.d = -13.0;
    unsigned int sign = (p.u >> 63) & 1;
    unsigned int exp = (p.u >> 52) & 0x7ff;

    unsigned long long coef_mask = (1ULL << 52) - 1;
    unsigned long long coef = p.u & coef_mask;

    printf("%d\n", sign);
    printf("%d\n", exp);
    printf("0x%llx\n", coef);
    
    return 0;
}
