#include<stdio.h>
int main(){
    int i,max;
    printf("Mostar os números impares entra 2 número:\n");
    printf("Digite o primeiro:\n");
    scanf("%d%*c",&i);
    printf("Digite o segundo número:\n");
    scanf("%d%*c",&max);
    while (i<=max)
    {
        if (i%2==1)
        {
            printf("%d- É impar.\n",i);
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    
}