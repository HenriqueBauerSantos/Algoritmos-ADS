#include<stdio.h>
int main(){
    int i=0;
    float soma,num;
    soma=0;
    do
    {
        printf("Digite um número:\n");
        scanf("%f%*c",&num);
        soma=(soma+num);
        i++;
    } while (i<10);
    printf("A soma dos números é %.2f.\n",soma);
}