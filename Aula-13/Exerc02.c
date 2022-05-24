#include<stdio.h>
int main(){
    int num;
    do
    {
        printf("Digite o número:\n");
        scanf("%d%*c",&num);
        if (num>0)
        {
            printf("O número %d é positivo.\n",num);
        }
        else if (num<0)
        {
            printf("O número %d é negativo.\n",num);
        }
        else
        {
            
        }
        
    } while (num !=0);
    
}