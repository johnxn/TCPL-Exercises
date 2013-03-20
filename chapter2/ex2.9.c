#include <stdio.h>

int ones(unsigned x)
{
    int b;
    for(b = 0; x != 0; x&=(x-1))
        b++;
    return b;
}

int main()
{
    printf("1 has %d ones\n", ones(1));
    printf("3 has %d ones\n", ones(3));
    printf("127 has %d ones\n", ones(127));
}
