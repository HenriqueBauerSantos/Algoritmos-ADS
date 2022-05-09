#include<stdio.h>
int main(){
    int op;
    float inv, resu;
    printf("Escolha o tipo de investimento:\n");
    printf("1- Poupança.\n2- Fundos de renda fixa.\n");
    scanf("%d%*c",&op);
    printf("Digite o valor:\n");
    scanf("%f%*c",&inv);
    if (op == 1)
    {
        resu = (inv*1.03);
        printf("O valor corrigido é: %.2f.\n",resu);
    }
    else if (op == 2)
    {
        resu = (inv*1.04);
        printf("O valor corrigido é: %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}