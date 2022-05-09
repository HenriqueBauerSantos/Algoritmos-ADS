#include<stdio.h>
int main(){
    float num1, num2;
    printf("Digite o primeiro número:\n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&num2);
    if (num1>num2){
        printf("O maior número é: %f\n",num1);
    }
    else if (num1<num2){
        printf("O maior número é: %f\n",num2);
    }
    else
        printf("Os números são iguais\n");
}