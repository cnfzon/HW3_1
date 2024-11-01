#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char string1[10] = "Welcome";
    char string2[10] = "Welcome";
    
    int len;

    strcpy(string2, string1);
    printf("string2=%s\n", string2);
    
    len = strnlen(string2);
    printf("¦r¦êªø«×¬°%d\n", len);
    system("pause");
    return 0;
}
