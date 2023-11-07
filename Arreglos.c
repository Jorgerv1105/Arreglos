#include <stdio.h>
#include <stdlib.h>
int main(int arg, char const argv[])
{
    srand(time(NULL));
    int vector1[10];
    printf("\nIngrese 10 datos");
for(int i = 0; i < 10; i++)
{
    //scanf("%d",&vector1[i]);
    vector1[i]=rand()%59 +25;
}
    printf("\n");
for(int i = 0; i < 10; i++)
{
    printf("%d \n", vector1[i]);
}
return 0;
}