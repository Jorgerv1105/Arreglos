#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n, m;
    printf("Ingrese el numero de filas (m): ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas (n): ");
    scanf("%d", &n);

    int matrix[m][n]; 

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0; 
        }
    }
    printf("Matriz:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
