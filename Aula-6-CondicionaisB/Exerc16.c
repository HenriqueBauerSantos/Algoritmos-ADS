#include<stdio.h>
int main(){
    float pre, cod, resu;
    printf("Digite o valor do produto:\n");
    scanf("%f%*c",&pre);
    printf("Digite o código do produto:\n");
    scanf("%f%*c",&cod);
    if (pre <= 30)
    {
        printf("O valor do produto código %.1f tem o valor %.2f.\n",cod,pre);
    }
    else if (pre>30 && pre<=100)
    {
        resu = (pre*0.9);
        printf("O valor do produto código %.1f tem o valor %.2f.\n",cod,resu);
    }
    else if (pre>100)
    {
        resu = (pre*0.85);
        printf("O valor do produto código %.1f tem o valor %.2f.\n",cod,resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}