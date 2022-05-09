#include<stdio.h>
int main (){
    int i;
    float A, B, C;
    printf("Digite o valor para A:\n");
    scanf("%f%*c",&A);
    printf("Digite o valor para B:\n");
    scanf("%f%*c",&B);
    printf("Digite o valor paa C:\n");
    scanf("%f%*c",&C);
    printf("Digite o valor para I (1,2 ou 3):\n");
    scanf("%d%*c",&i);
    if (i == 1)
    {
        if (A<B && B<C)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",A,B,C);
        }
        else if (A<C && C<B)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",A,C,B);
        }
        else if (B<A && A<C)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",B,A,C);
        }
        else if (B<C && C<A)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",B,C,A);
        }
        else if (C<A && A<B)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",C,A,B);
        }
        else if (C<B && B<A)
        {
            printf("A ordem crescente dos números é: %.2f, %.2F e %.2f.\n",C,B,A);
        }
        else
            printf("Dados invalidos.\n");  
    }
    else if (i == 2)
    {
        if (A>B && B>C)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",A,B,C);
        }
        else if (A>C && C>B)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",A,C,B);
        }
        else if (B>A && A>C)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",B,A,C);
        }
        else if (B>C && C>A)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",B,C,A);
        }
        else if (C>A && A>B)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",C,A,B);
        }
        else if (C>B && B>A)
        {
            printf("A ordem decrescente dos números é: %.2f, %.2F e %.2f.\n",C,B,A);
        }
        else
            printf("Dados invalidos.\n");
        
    }
    else if (i == 3)
    {
        if (A>B && A>C)
        {
            printf("A ordem é: %.2f - %.2F - %.2F.\n",B,A,C);
        }
        else if (B>A && B>C)
        {
            printf("A ordem é: %.2f - %.2F - %.2F.\n",A,B,C);
        }
        else if (C>A && C>B)
        {
            printf("A ordem é: %.2f - %.2F - %.2F.\n",A,C,B);
        }
        else
            printf("Dados invalidos.\n");
    }
    else if (i!=3 || i!=1 || i!=2)
    {
        printf("Opção invalida. Selecione uma das opções permitidas.\n");
    }
}