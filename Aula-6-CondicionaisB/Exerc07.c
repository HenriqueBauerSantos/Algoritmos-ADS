#include<stdio.h>
int main(){
    int op;
    float sal, resu;
    printf("Digite o valor do salário:\n");
    scanf("%f%*c",&sal);
    if (sal < 500)
    {
        resu = (sal*1.3);
        printf("O valor do salário ajustado é: %.2f.\n",resu);
    }
    else
    {
        printf("Não tem direito ao aumento.\n");
    }
}