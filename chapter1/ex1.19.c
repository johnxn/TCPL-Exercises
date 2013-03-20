#include <stdio.h>
#define MAXLINE 1000

int etline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];
    int length;
    while(length = etline(line, MAXLINE))
    {
        reverse(line);
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

void reverse(char s[])
{
    int length = 0;
    while(s[length] != '\0')
        length++;
    for(int i = 0; i < length/2; i++)
    {
        int temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
}








