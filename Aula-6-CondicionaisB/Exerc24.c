#include<stdio.h>
int main(){
    int cat,sit;
    float prec, precAm, precFin;
    printf("Digite o valor do produto:\n");
    scanf("%f%*c",&prec);
    printf("Selecione a categoria do produto:\n");
    printf("1- Limpeza.\n2- Alimentação.\n3- Vestuário.\n");
    scanf("%d%*c",&cat);
    printf("Digite a situação do produto:\n");
    printf("1- Produtos que necessitam de refrigeração.\n2- Produtos que não necessitam de refrigeração.\n");
    scanf("%d%*c",&sit);
    // printf("o preço é %.2f.\n",prec);
    // printf("Cat %d\n",cat);
    // printf("sit: %d\n",sit);
    if (prec<=25)
    {
        if (cat==1)
        {
            precAm=(prec*1.05);
        }
        else if (cat==2)
        {
            precAm=(prec*1.08);
        }
        else if (cat==3)
        {
            precAm=(prec*1.1);
        }
        // printf("precAm: %.2F\n",precAm);       
    }
    else if (prec>25)
    {
        if (cat==1)
        {
            precAm=(prec*1.12);
        }
        else if (cat==2)
        {
            precAm=(prec*1.15);
        }
        else if (cat==3)
        {
            precAm=(prec*1.18);
        }
        // printf("precAm: %.2F\n",precAm);
    }
    else
    {
        printf("Categoria digitada não existe.\n");
    }
    if (cat==2 || sit==1)
    {
        precFin=(precAm*0.95);
    }
    else
    {
        precFin=(precAm*0.92);
    }
    printf("Preço final do produto é: %.2f.\n",precFin);
    if (precFin<=50)
    {
        printf("Preço classificado como: Barato.\n");
    }
    else if (precFin>50 && precFin<120)
    {
        printf("Preço classificado como: Normal.\n");
    }
    else
    {
        printf("Preço classificado como: Caro.\n");
    }
}