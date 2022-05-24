#include<stdio.h>
int main(){
    int i=0, senha;
    do
    {
        printf("Digite a senha:\n");
        scanf("%d%*c",&senha);
        i++;
        if (senha==1234)
        {

            break;
        }
        else
        {
            printf("Senha invalida.\n");
        }
    } while (senha!=1234);
    printf("Acesso permetido.\n");
    printf("Tentativas de acesso: %d.",i);
}