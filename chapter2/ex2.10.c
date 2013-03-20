#include <stdio.h>

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ?  'a' + c - 'A' :  c;
}

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        putchar(lower(c));
    }
}
