#include<stdio.h>
int main(){
    float sal, resu;
    printf("Digite o salário:\n");
    scanf("%f%*c",&sal);
    if (sal<=350)
    {
        resu = ((sal+100)-(sal*0.07));
        printf("O novo salário é: %.2F\n",resu);
    }
    else if (sal>350 && sal<=600)
    {
        resu = ((sal+75)-(sal*0.07));
        printf("O novo salário é: %.2F\n",resu);
    }
    else if (sal>600 && sal<=900)
    {
        resu = ((sal+50)-(sal*0.07));
        printf("O novo salário é: %.2F\n",resu);
    }
    else if (sal>900)
    {
        resu = ((sal+35)-(sal*0.07));
        printf("O novo salário é: %.2F\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
    
}