#include<stdio.h>
int main(){
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número:\n");
        scanf("%d%*c",&num);
        if (num%2==0)
        {
            printf("O número %d é par.\n",num);
        }
        else if (num%2!=0)
        {
            printf("O número %d é impar.\n",num);
        }
        else
        {
            printf("Dados invalidos.\n");
        }       
    }
    
}