#include <stdio.h>
#define SPACES_OF_A_TAB 8

int main()
{
    int count = 0;
    int c;
    int spaces;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            count = count % SPACES_OF_A_TAB;
            spaces = SPACES_OF_A_TAB - (count);
            for(int i = 0; i < spaces; i ++)
            {
                putchar('$');
            }
            count = 0;
        }
        else if(c == '\n')
        {
            putchar('\n');
            count = 0;
        }
        else{
            putchar(c);
            count++;
        }
    }
}
