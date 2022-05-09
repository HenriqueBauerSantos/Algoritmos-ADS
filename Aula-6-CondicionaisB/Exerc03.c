#include<stdio.h>
int main (){
    float n1, n2;
    printf("Digite o número 1:\n");
    scanf("%f%*c",&n1);
    printf("Digite o número 2:\n");
    scanf("%f%*c",&n2);
    if (n1<n2)
    {
        printf("O menor número é o: %.2f\n",n1);
    }
    else if (n1>n2)
    {
        printf("O menor número é o: %.2F\n",n2);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}