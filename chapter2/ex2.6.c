#include <stdio.h>

int setbits(int x, int p, int n, int y);

int setbits(int x, int p, int n, int y)
{
    int a = (y & ~(~0 << n)) << (p+1-n);
    int b = x & ~(~(~0 << n) << (p+1-n));
    return a | b;

}
