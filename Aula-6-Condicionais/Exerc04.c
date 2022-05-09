#include<stdio.h>
int main(){
    float num1, num2, num3;
    printf("Digine o primeiro número:\n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&num2);
    printf("Digite o terceiro número:\n");
    scanf("%f%*c",&num3);
    if (num1<num2 && num2<num3)
    {
        printf("A ordem crescente é: %.2f(primeiro digitado),%.2f(segundo digitado) e %.2f(terceiro digitado).\n",num1,num2,num3);
    }
    else if (num1<num2 && num2>num3)
    {
        printf("A ordem crescente é: %.2F(primeiro digitado),%.2f(terceiro digitado) e %.2F(segundo digitado).\n",num1,num3,num2);
    }
    else if (num2<num1 && num1<num3)
    {
        printf("A ordem crescente é: %.2f(segundo digitado),%.2f(primeiro digitado) e %.2f(terceiro digitado).\n",num2,num1,num3);
    }
    else if (num2<num3 && num3<num1)
    {
        printf("A ordem crescente é: %.2F(segundo digitado),%.2f(terceiro digitado) e %.2F(primeiro digitado).\n",num2,num3,num1);
    }
    else if (num3<num1 && num1<num2)
    {
        printf("A ordem crescente é: %.2F(terceiro digitado),%.2f(primeiro digitado) e %.2F(segundo digitado).\n",num3,num1,num2);
    }
    else if (num3<num2 && num2<num1)
    {
        printf("A ordem crescente é: %.2F(terceiro digitado),%.2f(segundo digitado) e %.2F(primeiro digitado).\n",num3,num2,num1);
    }
    else
        printf("Números invalidos\n");   
}