#include<stdio.h>
int main(){
    int num;
    printf("Digito o número:\n");
    scanf("%d%*c",&num);
    if ((num % 2) == 0)
    {
        printf("O número é par.\n");
    }
    else
        printf("O número é impar.\n");
}