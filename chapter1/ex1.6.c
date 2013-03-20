#include <stdio.h>

int main()
{
    int c;
    c = getchar()!=EOF;
    printf("EOF is %c", c);
    return 0;
}
