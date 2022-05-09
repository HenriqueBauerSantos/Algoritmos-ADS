#include<stdio.h>
#include<math.h>
int main (){
    int op, num1, num2, resu, resu2;
    printf("Digite o primeiro número:\n");
    scanf("%d%*c",&num1);
    printf("Digite o segundo número:\n");
    scanf("%d%*c",&num2);
    printf("Escolhe uma das opções abaixo:\n");
    printf("1- O primeiro número elevado ao segundo.\n");
    printf("2- Raiz quadrada de cada um doa números.\n");
    printf("3- Raiz cúbica de cada um dos números.\n");
    scanf("%d%*c",&op);
    if (op == 1)
    {
        resu = (pow(num1,num2));
        printf("O resultado é: %d.\n",resu);
    }
    else if (op == 2)
    {
        resu = sqrt(num1);
        resu2 = sqrt(num2);
        printf("A raiz quadrada do primeiro número é: %d.\n",resu);
        printf("A raiz quadrada do segundo número é: %d.\n",resu2);
    }
    else if (op ==3)
    {
        resu = cbrt(num1);
        resu2 = cbrt(num2);
        printf("A raiz cúbica do primeiro número é: %d.\n",resu);
        printf("A raiz cúbica do segundo número é: %d.\n",resu2);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}