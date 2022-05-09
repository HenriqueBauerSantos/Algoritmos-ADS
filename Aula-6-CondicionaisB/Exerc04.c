#include<stdio.h>
int main(){
    float n1, n2, n3;
    printf("Digite o primeiro número:\n");
    scanf("%f%*c",&n1);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&n2);
    printf("Digite o terceiro número:\n");
    scanf("%f%*c",&n3);
    if (n1>n2 && n1>n3)
    {
        printf("O maior número é o: %.2F\n",n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("O maior número é o: %.2F\n",n2);
    }
    else if (n3>n1 && n3>n2)
    {
        printf("O maior número é o: %.2F\n",n3);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
    
}