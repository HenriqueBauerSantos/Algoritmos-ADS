#include<stdio.h>
int main(){
    int num, div, resu,i=0,cont=0,condi;
    do
    {
        printf("Digite o valor a ser dividido:\n");
        scanf("%d%*c",&num);
        printf("Digite o número divisor:\n");
        scanf("%d%*c",&div);
        if (div==0)
        {
            printf("Valor invalido.\n");
            printf("O número digitado como divisor for 0, por favor, digite outro:\n");
            scanf("%d%*c",&div);
        }
        resu=(num/div);
        printf("O resultado da divisão é %d.\n",resu);
        printf("\nDeseja realizar outra divisão?\n");
        printf("1- Sim.\n2-Não\n");
        scanf("%d%*c",&condi);
        if (condi==1)
        {
            i++;
        }
        cont=(cont+i);
    } while (condi==1);
    printf("Foram realizados %d calculos.\n",cont);
}