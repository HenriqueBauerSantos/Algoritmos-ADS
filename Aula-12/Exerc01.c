#include<stdio.h>
int main(){
    float soma,num;
    soma=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número:\n");
        scanf("%f%*c",&num);
        soma=(soma+num);
    }
    printf("A soma dos números é %.2f.\n",soma);
}