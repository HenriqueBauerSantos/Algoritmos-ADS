#include<stdio.h>
int main(){
    int op;
    float A, B, C;
    printf("Selecione uma opção:\n");
    printf("1-  a, b, c em ordem crescente.\n");
    printf("2-  a, b, c em ordem decrescente.\n");
    printf("3- O maior valor entre os outros.\n");
    scanf("%d%*c",&op);
    printf("Digite o primeiro número:\n");
    scanf("%f%*c",&A);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&B);
    printf("Digite o terceiro número:\n");
    scanf("%f%*c",&C);
    if (op == 1)
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
    else if (op == 2)
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
    else if (op == 3)
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
    else if (op!=3 || op!=1 || op!=2)
    {
        printf("Opção invalida. Selecione uma das opções permitidas.\n");
    }
}