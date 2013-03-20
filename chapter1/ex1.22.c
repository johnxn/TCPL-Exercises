#include <stdio.h>
#define ENDCOL 10

int main()
{
    char spacesAndTab[ENDCOL];
    int c, i;
    int p = 0;
    for(i = 1; (c = getchar()) != EOF; i++)
    {
        if(c == ' ' || c == '\t')
        {
            spacesAndTab[p++] = c;
        }
        else if(c != '\n')
        {
            for(int i = 0; i < p; i++)
                putchar(spacesAndTab[i]);
            p = 0;
            putchar(c);
        }
        if(i >= ENDCOL -1 || c == '\n')
        {
            p = 0;
            i = 0;
            putchar('$');
            putchar('\n');
        }
    }
}
