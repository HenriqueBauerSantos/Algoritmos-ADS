#include<stdio.h>
int main(){
    float num1, num2, num3, num4;
    printf("Digite três números CRESCENTES:\n");
    scanf("%f%*c",&num1);
    scanf("%f%*c",&num2);
    scanf("%f%*c",&num3);
    printf("Digite um número (Fora de ordem):\n");
    scanf("%f%*c",&num4);
    if (num4>num3)
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f e %.2f.\n",num4,num3,num2,num1);
    }
    else if (num4<num3 && num2<num4)
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f e %.2f.\n",num3,num4,num2,num1);
    }
    else if (num4<num2 && num1<num4)
    {
        printf("A ordem decescente é: %.2f, %.2f, %.2f e %.2f.\n",num3,num2,num4,num1);
    }
    else if (num4<num1)
    {
        printf("A ordem decescente é: %.2f, %.2f, %.2f e %.2f.\n",num3,num2,num1,num4);
    }
    else
        printf("Números invalidos\n");
}