#include<stdio.h>
int main(){
    int num, soma, i=0;
    printf("Digite um número:\n");
    scanf("%d%*c",&num);
    while (i<num)
    {
        soma=(i+soma);
        i++;
    }
    printf("A soma dos números de 1 até o selecionado é: %d.\n",soma);
}