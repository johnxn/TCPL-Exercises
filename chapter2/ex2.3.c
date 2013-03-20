#include <stdio.h>

int htoi(char s[]);

int htoi(char s[])
{
    int i = 0;
    if(s[1] == 'x' || s[1] == 'X'){
        if(s[0] != '0')
            return -1;
        else
            i = 2;
    }
    int sum = 0;
    int digit;
    for(; s[i] != '\0'; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
            digit = s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f')
            digit = s[i] - 'a' + 10;
        else if(s[i] >= 'A' && s[i] <= 'F')
            digit = s[i] - 'A' + 10;
        else
            return -1;
        sum = sum * 16 + digit;
    }
    return sum;
}
int main()
{
    char s[1000];
    int c;
    int i = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            s[i] = '\0';
            printf("%d\n", htoi(s));
            i = 0;
        }
        else
            s[i++] = c;
    }
}
