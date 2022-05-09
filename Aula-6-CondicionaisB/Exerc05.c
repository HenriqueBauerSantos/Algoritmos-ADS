#include<stdio.h>
int main () {
    int op;
    float num1, num2, resu;
    printf("Digite o primeiro número:\n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&num2);
    printf("Escolha uma das opções abaixo: \n1- Média entre os números digitados. \n2- Diferença do maior pro menor. \n3- Produto entre os dois digitados. \n4- Divisão do primeiro pelo segundo.\n");
    scanf("%d%*c",&op);
    if (op == 1)
    {
        resu = ((num1+num2)/2);
        printf("A média é %.2F.\n",resu);
    }
    else if (op == 2)
    {
        if (num1>num2)
        {
            resu = (num1-num2);
            printf("A diferença entre os números é de: %.2f.\n",resu);
        }
        else if (num2>num1)
        {
            resu = (num2-num1);
            printf("A diferença entre os números é de: %.2f.\n",resu);
        }
        else
        {
            printf("Os números são iguais.\n");
        }      
    }
    else if (op == 3)
    {
        resu = (num1*num2);
        printf(" O produto entre eles é: %.2f.\n",resu);
    }
    else if (op == 4)
    {
        resu = (num1/num2);
        printf("O resultado da divisão é: %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.");
    }
}