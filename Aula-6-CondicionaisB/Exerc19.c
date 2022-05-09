#include<stdio.h>
int main(){
    int op;
    float alt, pes, resu;
    printf("Escolha o sexo:\n");
    printf("1- Homem.\n2- mulher.\n");
    scanf("%d%*c",&op);
    printf("Digite sua altura:\n");
    scanf("%f%*c",&alt);
    printf("Digite seu peso:\n");
    scanf("%f%*c",&pes);
    if (op==1)
    {
        resu = ((72.7*alt)-58);
        printf("O peso ideial é: %.2f.\n",resu);
    }
    else if (op==2)
    {
         resu = ((62.1*alt)-44.7);
        printf("O peso ideial é: %.2f.\n",resu);
    }
    else
    {
        printf("Opção invalida.\n");
    }
}