#include<stdio.h>
int main(){
    float num;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número:\n");
        scanf("%f%*c",&num);
        if (num>0)
        {
            printf("O número %.2f é positivo.\n",num);
        }
        else if (num==0)
        {
            printf("O número %.2f é nulo.\n",num);
        }
        else
        {
            printf("O número %.2f é negativo.\n",num);
        }
    }
    
}