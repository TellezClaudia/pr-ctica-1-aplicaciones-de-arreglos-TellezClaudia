#include <stdio.h>

int main()
{
    int arreglo[2][3] = { {1, 2, 3},
                          {4, 5, 6} };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Valor: %d, Dirección de memoria: %p\n", arreglo[i][j], (int*)&arreglo[i][j]);
        }
    }
    printf("%p\n", &arreglo);
    printf("%p\n", &arreglo[0]);
    printf("%p\n", &arreglo[0][0]);
    return 0;
}