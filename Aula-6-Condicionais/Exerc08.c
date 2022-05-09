#include<stdio.h>
#include<math.h>
int main () {
    int op;
    float num1, num2,soma, raiz;
    printf("MENU:\n");
    printf("1- Somar dois números.\n");
    printf("2- Raiz quadrada de um número.\n");
    printf("Digite sua opção:\n");
    scanf("%d%*c",&op);
    if (op == 1)
    {
        printf("Digite o valor do primeiro número:\n");
        scanf("%f%*c",&num1);
        printf("Digite o valor do segundo número:\n");
        scanf("%f%*c",&num2);
        soma = (num1+num2);
        printf("A soma de %.2F e %.2F é: %.2F.\n",num1,num2,soma);
    }
    else if (op == 2)
    {
        printf("Digite o valor:\n");
        scanf("%F%*c",&num1);
        raiz = sqrt(num1);
        printf("A raiz quadrada de %.2F é: %.2F.\n",num1,raiz);
    }
    else if ((op != 1) && (op != 2))
    {
        printf("Opção invalida\n");
    }
}
