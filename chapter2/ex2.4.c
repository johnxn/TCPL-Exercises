#include <stdio.h>

char* squeeze(char s1[], char s2[]);

char* squeeze(char s1[], char s2[])
{
    int i, j, k;
    for(i = j = 0; s1[i] != '\0'; i++)
    {
        int flag = 1;
        for(k = 0; s2[k] != '\0'; k++)
        {
            if(s1[i] == s2[k])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
    return s1;
}

int main()
{
    char s1[] = "xiang* lsdkfjsdnan* ";
    char s2[] = "xiang*";
    printf("%s\n", squeeze(s1, s2));
}
