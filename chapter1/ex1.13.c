#include <stdio.h>

#define IN 1
#define OUT 0
int main()
{
    char* words[1000];
    char word[30];
    int length[1000];
    int c;
    int state = OUT;
    int index = 0;
    for(int i = 0; i < 100; i++)
    {
        length[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state)
            {
                state = OUT;
                index++;
            }
            state = OUT;
        }
        else
        {
            state = IN;
            length[index]++;
        }
    }
    for(int i = 0; length[i] != 0; i++ )
    {
        printf("%d\n", length[i]);
    }
    int max = length[0];
    int count = 0;
    for(int i = 0; length[i] != 0; i++)
    {
        count ++;
        if(length[i] > max)
            max = length[i];
    }
    while(max--){
        for(int j = 0; j < count; j++)
        {
            if(length[j] > max)
                printf("%4c", '|');
            else
                printf("%4c", ' ');
        }
        printf("\n");
    }

}
