#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%10d", 1+(rand()%6));
        if(i%5==0) printf("\n");
    }
    system("pause");
    return 0;
}