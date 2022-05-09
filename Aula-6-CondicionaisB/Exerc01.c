#include<stdio.h>
int main () {
    float n1, n2, n3, n4, media;
    printf("Digite o valor da primeira nota:\n");
    scanf("%f%*c",&n1);
    printf("Digite o valor da segunda nota:\n");
    scanf("%f%*c",&n2);
    printf("Digite o valor da terceira nota:\n");
    scanf("%f%*c",&n3);
    printf("Digite o valor da quarta nota:\n");
    scanf("%f%*c",&n4);
    media = ((n1+n2+n3+n4)/4);
    if (media >= 7)
    {
        printf("Aprovado!\n");
    }
    else if (media < 7)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Dados invalidos\n");
    }   
}