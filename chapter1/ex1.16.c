#include <stdio.h>
#define MAXLINE 1000

int etline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    char line[MAXLINE];
    int length;
    while(length = etline(line, MAXLINE))
    {
        printf("%d\n", length);
        printf("%s", line);
    }
    return 0;
}

int etline(char line[], int maxline)
{
    int c;
    int i;
    for(i = 0; i < maxline && ((c = getchar()) != EOF); i++)
    {
        if(c == '\n')
        {
            line[i++] = c;
            break;
        }
        else
            line[i] = c;
    }
    line[i] = '\0';
    return i;
}









