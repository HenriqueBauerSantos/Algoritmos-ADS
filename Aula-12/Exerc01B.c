#include<stdio.h>
int main(){
    int i=0;
    float num, soma;
    soma=0;
    while (i<10)
    {
        printf("Digite um número:\n");
        scanf("%f%*c",&num);
        soma=(soma+num);
        i++;
    }
    printf("A soma dos números é %.2f.\n",soma);
}