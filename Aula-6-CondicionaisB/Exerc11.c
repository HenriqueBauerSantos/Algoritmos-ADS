#include<stdio.h>
int main(){
    float sal, resu;
    printf("Digite o valor do salário:\n");
    scanf("%f%*c",&sal);
    if (sal<=300)
    {
        resu =( sal*1.15);
        printf("O novo salário sera de: %.2f.\n",resu);
    }
    else if (sal>300 && sal<=600)
    {
        resu = (sal*1.1);
        printf("O novo salário sera de: %.2f.\n",resu);
    }
    else if (sal>600 && sal<=900)
    {
        resu = (sal*1.05);
        printf("O novo salário sera de: %.2f.\n",resu);
    }
    else if (sal>900)
    {
        resu = sal;
        printf("O novo salário sera de: %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}