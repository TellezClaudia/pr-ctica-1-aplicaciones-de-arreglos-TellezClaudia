#include <stdio.h>

char main()
{
    char arreglo[5]={1,2,3,4,5};
    for(char i=0; i<5; i++)
    {
        printf("%p\n", &arreglo[5]);
    }
    return 0;
}
