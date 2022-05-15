#include<stdio.h>
int main(){
    float nota1,nota2,nota3,media,matricula;
    char nome[30];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite sua matricula:\n");
        scanf("%f%*c",&matricula);
        printf("Digite seu nome:\n");
        scanf("%s",&nome);
        printf("Digite sua primeira nota:\n");
        scanf("%f%*c",&nota1);
        printf("Digite sua segunda nota:\n");
        scanf("%f%*c",&nota2);
        printf("Digite sua terceira nota:\n");
        scanf("%f%*c",&nota3);
        media=((nota1+nota2+nota3)/3);
        printf("O aluno %s, matricula %.2f esta:\n",nome,matricula);
        if (media>=7)
        {
            printf("Aprovado.\n");
        }
        else
        {
            printf("Reprovado.\n");
        }
    }
}