#include <stdio.h>
#include <limits.h>

int main()
{
    printf("siged short min = %d\n", -(short)((unsigned short)~0 >> 1));
    printf("real%d\n", SHRT_MIN);
    printf("siged short max = %d\n", (short)((unsigned short)~0 >> 1));
    printf("real%d\n", SHRT_MAX);
    printf("siged int min = %d\n", -(int)((unsigned int)~0 >> 1));
    printf("real%d\n", INT_MIN);
    printf("siged int max = %d\n", (int)((unsigned int)~0 >> 1));
    printf("real%d\n", INT_MAX);

    printf("unsigned short max %u\n", (unsigned short)~0);
    printf("real%u\n", USHRT_MAX);
}
