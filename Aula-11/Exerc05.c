#include<stdio.h>
int main(){
    int n1, n2;
    printf("Digite o primeiro número:\n");
    scanf("%d%*c",&n1);
    printf("Digite o segundo número:\n");
    scanf("%d%*c",&n2);
    if((n1%2)==0)
    {
        printf("O número %d é par.\n",n1);
    }
    else
    {
        printf("O número %d é impar.\n",n1);
    }
    if((n2%2)==0)
    {
        printf("O número %d é par.\n",n2);
    }
    else
    {
        printf("O número %d é impar.\n",n2);
    }
}