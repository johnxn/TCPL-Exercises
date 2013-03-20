#include <stdio.h>

int main()
{
    int singleQuote = 0;
    int doubleQuote = 0;
    int comment = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        if(c== '/')
        {
            if(doubleQuote || singleQuote)
            {
                putchar(c);
            }
            else if(comment == 0)
            {
                comment = 1;
            }
            else if(comment == 1)
            {
                comment = 1;
                putchar('/');
            }
            else if(comment == 2)
            {
                ;
            }
            else
            {
                comment = 0;
            }
        }
        else if(c == '*')
        {
            if(doubleQuote || singleQuote)
            {
                putchar(c);
            }
            else if(comment == 0)
            {
                putchar(c);
            }
            else if(comment == 1)
            {
                comment = 2;
            }
            else if(comment == 2)
            {
                comment = 3;
            }
            else
            {
                comment = 3;
            }
        }
        else
        {
            if(comment == 0)
            {
                if(c == '\"')
                    doubleQuote = doubleQuote ? 0 : 1;
                if(c == '\'')
                    singleQuote = singleQuote ? 0 : 1;
                putchar(c);
            }
            else if(comment == 1)
            {
                if(c == '\"')
                    doubleQuote = doubleQuote ? 0 : 1;
                if(c == '\'')
                    singleQuote = singleQuote ? 0 : 1;
                comment = 0;
                putchar('/');
                putchar(c);
            }
            else if(comment == 2)
            {
                ;
            }
            else
            {
                comment = 2;
                putchar('*');
                putchar(c);
            }
        }
    }
}
