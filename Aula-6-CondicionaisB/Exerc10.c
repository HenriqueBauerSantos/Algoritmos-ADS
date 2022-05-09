#include<stdio.h>
int main(){
    float cust, resu;
    printf("Digite o custo de frabica:\n");
    scanf("%f%*c",&cust);
    if (cust<=12000)
    {
        resu = (cust*1.05);
        printf("O preço ao consumidor será de: %.2f.\n",resu);
    }
    
    else if (cust>12000 && cust<=25000)
    {
        resu = (cust+(cust*0.10)+(cust*0.15));
        printf("O preço ao consumidor será de: %.2f.\n",resu);
    }
    else if (cust>25000)
    {
        resu = (cust+(cust*0.15)+(cust*0.20));
        printf("O preço ao consumidor será de: %.2f.\n",resu);
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}