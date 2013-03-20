#include <stdio.h>

int main()
{
    int c;
    int newline = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(newline)
            {
                printf("\n");
                newline = 0;
            }
        }
        else
        {
            putchar(c);
            newline = 1;
        }
    }
    return 0;
}
