#include<stdio.h>
int main() {
    float prec;
    int cod;
    printf("Digite o preço do produto:\n");
    scanf("%f%*c",&prec);
    printf("Digite o código do produto:\n");
    scanf("%d%*c",&cod);
    if (cod==1)
    {
        printf("O produto com procedência do Sul, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod==2)
    {
        printf("O produto com procedência do Norte, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod==3)
    {
        printf("O produto com procedência do Leste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod==4)
    {
        printf("O produto com procedência do Oeste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod==5 || cod==6)
    {
        printf("O produto com procedência do Nordeste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod==7 || cod==8 || cod==9)
    {
        printf("O produto com procedência do Sudeste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod>=10 && cod<=20)
    {
        printf("O produto com procedência do Centroeste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod>=21 && cod<=30)
    {
        printf("O produto com procedência do Nordeste, tem o preço de %.2f.\n",
        prec);
    }
    else if (cod>30)
    {
        printf("Código incorreto.\n");
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}