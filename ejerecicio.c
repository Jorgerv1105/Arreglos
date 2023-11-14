//Se necesita un programa para apoyar el conteo de votos donde participan 5 
//candidatos los cuales estan reprentados por los numeros del 1 al 5 . 
//El usurio del programa ingresa votos desorganizadamente y el ingreso termina cuando 
//el valor es 0
//2 5 5 3 5 5 1 2 4 5
#include <stdio.h>
int main ()
{
    int votos=999;
    int candidato[5]={0};
    int TotalVotos[5];
    int VotosNulos;
        printf("ingrese los votos de los candidatos 1 a 5\n");
        scanf("%d",&votos);
do{
    if(votos>1 && votos<5)
    {
          candidato[votos-1]++; 
    }
        printf("ingrese los votos de los candidatos 1 a 5\n");
        scanf("%d",&votos);
}while(votos!=0);
for(int i = 0;i < 5 ; i++)
{
    printf("\ncandidato %d: %d\n",i+1, candidato[i]);
}

return 0;
}
