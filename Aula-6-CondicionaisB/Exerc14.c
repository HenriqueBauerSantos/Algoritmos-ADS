#include<stdio.h>
int main(){
    float sal, resu;
    printf("Digite o valor do salário:\n");
    scanf("%f%*c",&sal);
    if (sal<=300)
    {
        resu = (sal*1.5);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else if (sal>300 && sal<=500)
    {
        resu = (sal*1.4);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else if (sal>500 && sal<=700)
    {
        resu = (sal*1.3);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else if (sal>700 && sal<=800)
    {
        resu = (sal*1.2);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else if (sal>800 && sal<=1000)
    {
        resu = (sal*1.1);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else if (sal>1000)
    {
        resu = (sal*1.05);
        printf("O novo salário é de %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
    
}