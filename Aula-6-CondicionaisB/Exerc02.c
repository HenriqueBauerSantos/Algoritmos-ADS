#include<stdio.h>
int main () {
    float n1, n2, media;
    printf("Digite a primeira nota:\n");
    scanf("%f%*c",&n1);
    printf("Digite a segunda nota:\n");
    scanf("%f%*c",&n2);
    media = ((n1+n2)/2);
    if (media >= 7)
    {
        printf("Sua nota foi de %.2f. Aprovado!\n",media);
    }
    else if (media>=4 && media<7)
    {
        printf("Sua nota foi de %.2F. Exame!\n");
    }
    else if (media<4)
    {
        printf("Sua nota foi de %.2F. Reprovado.\n");
    }
    else
    {
        printf("Dados invalidos.");
    }
}