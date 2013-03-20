#include <stdio.h>

int main()
{
    int hasSpace = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(!hasSpace){
                putchar(' ');
                hasSpace = 1;
            }
        }
        else
        {
            putchar(c);
            hasSpace = 0;
        }
    }
    return 0;
}
