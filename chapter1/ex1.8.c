#include <stdio.h>

int main()
{
    char c;
    int count = 0;
    while((c = getchar()) != EOF)
    {
        if(c=='\n' || c=='\t' || c==' ')
        {
            count++;
        }
    }
    printf("spaces,tabs and crs are %d", count);
    return 0;

}
