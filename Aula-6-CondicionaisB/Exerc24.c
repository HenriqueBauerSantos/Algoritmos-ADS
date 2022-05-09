#include<stdio.h>
int main(){
    int sit,cat;
    float prec, precAm, precF;
    printf("Digite o valor do produto:\n"); //Obtenção dos dados
    scanf("%f%*c\n",&prec);
    printf("Preço: %.2f\n",prec);
    printf("Digite a categoria do produto:\n");
    printf("1- Limpeza.\n2- Alimentação.\n3- Vestuario.\n"); 
    scanf("%d%*c",&cat);
    printf("Digite a situação do produto:\n");
    printf("1- Produtos que necessitam de refrigeração.\n2- Produtos que não necessitam de refrigeração.\n");
    scanf("%d%*c",&sit);
    if (prec<=25)
    {
        if (cat == 1)
        {
            precAm= (prec*1.05);
        }
        else if (cat == 2)
        {
            precAm= (prec*1.08);
        }
        else if (cat == 3)
        {
            precAm= (prec*1.1);
        }
        else
        {
            printf("Dados invalidos.\n");
        }
        printf("Preço: %.2f\n",prec);
    }
    else if (prec>25)
    {
        if (cat==1)
        {
            precAm= (prec*1.12);
        }
        else if (cat==2)
        {
            precAm= (prec*1.15);
        }
        else if (cat==3)
        {
            precAm= (prec*1.18);
        }
        else
        {
            printf("Dados invalidos.\n");
        }
        printf("preço aumento: %.2f",precAm);
    }
    if (cat==2 || sit== 2)
    {
        precF=(precAm*0.95);
    }
    else
    {
        precF=(precAm*0.92);
    }
    if (precF<=50)
    {
        printf("Preço de %.2f, classificado como barato.\n",precF);
    }
    else if (precF>50 && precF<120)
    {
         printf("Preço de %.2f, classificado como normal.\n",precF);
    }
    else if (precF>=120)
    {
         printf("Preço de %.2f, classificado como caro.\n",precF);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}