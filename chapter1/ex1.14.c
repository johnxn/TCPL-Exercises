#include <stdio.h>

int main()
{
    int numberOfChars[128];
    int c;
    for(int i = 0; i < 128; i++)
    {
        numberOfChars[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        numberOfChars[c]++;
    }

    int max = numberOfChars[0];
    for(int i = 1; i < 128; i++)
    {
        if(numberOfChars[i] > max)
            max = numberOfChars[i];
    }
    while(max--)
    {
        for(int i = 0; i < 128; i++)
        {
            if(numberOfChars[i])
            {
                if(numberOfChars[i] > max)
                    printf("%4c", '|');
                else
                    printf("%4c", ' ');
            }
        }
        printf("\n");
    }
    for(int i = 0; i < 128; i++)
    {
        if(numberOfChars[i])
            printf("%4d", i);
    }
    printf("\n");
}
