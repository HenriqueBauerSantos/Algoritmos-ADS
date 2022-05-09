#include<stdio.h>
int main(){
    float sal, resu;
    printf("Digite a média do salário anual:\n");
    scanf("%f%*c",&sal);
    if (sal>400)
    {
        resu = (0.3*sal);
        printf("O valor do crédito é: %.2f.\n",resu);
    }
    else if (300<sal && sal <= 400)
    {
        resu = (0.25*sal);
        printf("O valor do crédito é: %.2f.\n",resu);
    }
    else if (sal>200 && sal<=300)
    {
        resu = (0.2*sal);
        printf("O valor do crédito é: %.2f.\n",resu);
    }
    else if (sal<=200)
    {
        resu = (0.1*sal);
        printf("O valor do crédito é: %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}