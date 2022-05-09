#include<stdio.h>
int main(){
    int cod;
    float qnt, prec, precTotal, desc, precDesc;
    printf("Digite o código do produto:\n");
    scanf("%d%*c",&cod);
    printf("Digite a quantidade comprada:\n");
    scanf("%f%*c",&qnt);
    if (cod>=1 && cod<=10)
    {
        prec=10;
    }
    else if (cod>=11 && cod<=20)
    {
        prec=15;
    }
    else if (cod>=21 && cod<=30)
    {
        prec=20;
    }
    else if (cod>=31 && cod<=40)
    {
        prec=30;
    }

    precTotal= (prec*qnt);

    if (precTotal<250)
    {
        desc= (precTotal*0.05);
    }
    else if (precTotal>=250 && precTotal<=500)
    {
        desc=(precTotal*0.1);
    }
    else if (precTotal>500)
    {
        desc=(precTotal*0.15);
    }

    precDesc=(precTotal-desc);
    printf("O preço unitario do preduto é %.2f.\n",prec);
    printf("Compra de %.2f unidades do produto, totalizando o valor de %.2f.\n",qnt,precTotal);
    printf("Preço a pagar: %.2f (Desconto de %.2f).\n",precDesc, desc);
}