#include<stdio.h>
int main(){
    int op, ida;
    printf("Digite sua idade:\n");
    scanf("%d%*c",&ida);
    printf("Alfabetizado? (1-SIM 2-NÂO)\n");
    scanf("%d%*c",&op);
    if (ida<18)
    {
        printf("Você é menor de idade.\n");
    }
    else if (ida>=18)
    {
        printf("Você é maior de idade.\n");
    }
    if ((ida>=16 && ida<18) || ida>70 || op==2)
    {
        printf("Seu voto é facultativo.\n");
    }
    else if (ida<16)
    {
        printf("Você ainda não vota.\n");
    }
    else if (ida>18 || ida<=70)
    {
        printf("Seu voto é obrigatorio.\n");
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}