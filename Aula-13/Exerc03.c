#include<stdio.h>
int main(){
    int num;
    do
    {
        printf("Digite um número:\n");
        scanf("%d%*c",&num);
        if (num>0)
        {
            if (num%2==0)
            {
                printf("O número %d é par.\n",num);
            }
            else
            {
                printf("O número %d é impar.\n",num);
            }
        }
    } while (num>0);
    
}