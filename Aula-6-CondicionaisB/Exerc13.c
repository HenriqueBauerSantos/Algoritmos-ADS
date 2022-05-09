#include<stdio.h>
int main(){
    float prec, noPrec;
    printf("Digite o valor do produto:\n");
    scanf("%f%*c",&prec);
    if (prec<=50)
    {
        noPrec = (prec*1.05);
    }
    else if (prec>50 && prec<=100)
    {
        noPrec = (prec*1.1);
    }
    else
    {
        noPrec = (prec*1.15);
    }
    if (noPrec<=80)
    {
        printf("O novo preço é de %.2f. Barato.\n",noPrec);
    }
    else if (noPrec>80 && noPrec<=120)
    {
        printf("O novo preço é de %.2f. Normal.\n",noPrec);
    }
    else if (noPrec>120 && noPrec<=200)
    {
        printf("O novo preço é de %.2f. Caro.\n",noPrec);
    }
    else
    {
        printf("O novo preço é de %.2f. Muito caro.\n",noPrec);
    }
}