#include<stdio.h>
int main(){
    int sen;
    printf("Digite a senha:\n");
    scanf("%d%*c",&sen);
    if (sen==4531)
    {
        printf("Acesso autorizado.\n");
    }
    else
    {
        printf("Acesso negado.\n");
    }
}