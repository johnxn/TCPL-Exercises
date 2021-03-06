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
        int i;
        for(i = length-2; i >= 0; i--)
        {
            if(line[i] == '\t' || line[i] == ' ')
                line[i] = '\n';
            else
                break;
        }
        line[i+2] = '\0';
        if(i != -1)
            printf("%s", line);

    }
    return 0;
}

int etline(char line[], int maxline)
{
    int c;
    int i;
    //i < maxline - 1, because we got a '\0' at the end.
    for(i = 0; i < maxline-1 && ((c = getchar()) != EOF); i++)
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

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}









