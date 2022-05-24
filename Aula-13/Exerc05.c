#include<stdio.h>
int main(){
    int num1,num2;
    do
    {
        printf("Digite o primeiro valor\n");
        scanf("%d%*c",&num1);
        printf("Digite o segundo valor\n");
        scanf("%d%*c",&num2);
        if (num1!=num2)
        {
            if (num1>num2)
            {
                printf("Ordem decrescente.\n");
            }
            else
            {
                printf("Ordem crescente.\n");
            }   
        }
        
    } while (num1!=num2);
  
    
}