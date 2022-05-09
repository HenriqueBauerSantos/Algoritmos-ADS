#include<stdio.h>
int main(){
    float sal, resu;
    printf("Digite o valor do salário:\n");
    scanf("%f%*c",&sal);
    if (sal <= 300)
    {
        resu = (sal*1.35);
        printf("O valor do novo salário é: %.2F.",resu);
    }
    else
    {
        resu = (sal*1.15);
        printf("O valor do novo salário é: %.2F.",resu);
    }
}