#include<stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Digite a primeira nota:\n");
    scanf("%f%*c",&n1);
    printf("Digite a segunda nota:\n");
    scanf("%f%*c",&n2);
    printf("Digite a terceira nota:\n");
    scanf("%f%*c",&n3);
    media= ((n1+n2+n3)/3);
    printf("Sua nota é %.2f.\n",media);
    if (media>=9 && media<=10)
    {
        printf("Seu conceito é: A\n");
        printf("Aprovado!\n");
    }
    else if (media>=7.5 && media<9)
    {
        printf("Seu conceito é: B\n");
        printf("Aprovado!\n");
    }
    else if (media>=6 && media<7.5)
    {
        printf("Seu conceito é: C\n");
        printf("Aprovado!\n");
    }
    else if (media>=4 && media<6)
    {
        printf("Seu conceito é: D\n");
        printf("Reprovado!\n");
    }
    else if (media<4)
    {
        printf("Seu conceito é: E\n");
        printf("Reprovado!\n");
    }
    else
    {
        printf("Dados invalidos.\n");
        printf("Reprovado!\n");
    }
}