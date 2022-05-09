#include<stdio.h>
int main(){
    int id;
    float peso;
    printf("Digite sua idade:\n");
    scanf("%d%*c",&id);
    printf("Digite seu peso:\n");
    scanf("%f%*c",&peso);
    if (id<20)
    {
        if (peso<60)
        {
            printf("Grupo de risco Nº 9.\n");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Grupo de risco Nº 8.\n");
        }
        else
        {
            printf("Grupo de risco Nº 7.\n");
        }
    }
    else if (id>=20 && id<50)
    {
         if (peso<60)
        {
            printf("Grupo de risco Nº 6.\n");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Grupo de risco Nº 5.\n");
        }
        else
        {
            printf("Grupo de risco Nº 4.\n");
        }
    }
    else if (id>=50)
    {
         if (peso<60)
        {
            printf("Grupo de risco Nº 3.\n");
        }
        else if (peso>=60 && peso<=90)
        {
            printf("Grupo de risco Nº 2.\n");
        }
        else
        {
            printf("Grupo de risco Nº 1.\n");
        }
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}