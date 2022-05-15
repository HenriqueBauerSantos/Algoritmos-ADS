#include<stdio.h>
int main(){
    int num, soma, i=0;
    printf("Digite um número:\n");
    scanf("%d%*c",&num);
    do
    {
        soma=(i+soma);
        i++;
    } while (i<num);
    printf("A soma dos números de 1 até o selecionado é: %d.\n",soma);
}