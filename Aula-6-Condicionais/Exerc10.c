#include<stdio.h>
int main(){
    int d1, m1, a1, d2, m2, a2;
    printf("Digite a primeira data\n");
    printf("Dia:\n");
    scanf("%d%*c",&d1);
    printf("Mês:\n");
    scanf("%d%*c",&m1);
    printf("Ano:\n");
    scanf("%d%*c",&a1);
    printf("Digite a segunda data\n");
     printf("Dia:\n");
    scanf("%d%*c",&d2);
    printf("Mês:\n");
    scanf("%d%*c",&m2);
    printf("Ano:\n");
    scanf("%d%*c",&a2);
    if (a1>a2)
    {
        printf("A data maior é a %D/%d/%d.\n",d1,m1,a1);
    }
    else if (a2>a1)
    {
        printf("A data maior é a %D/%d/%d.\n",d2,m2,a2);
    }
    else
    {
        if (m1>m2)
        {
            printf("A data maior é a %D/%d/%d.\n",d1,m1,a1);
        }
        else if (m2>m1)
        {
            printf("A data maior é a %D/%d/%d.\n",d2,m2,a2);
        }
        else
        {
            if (d1>d2)
            {
                printf("A data maior é a %D/%d/%d.\n",d1,m1,a1);
            }
            else if (d2>d1)
            {
                printf("A data maior é a %D/%d/%d.\n",d2,m2,a2);
            }
            else if (d1==d2)
            {
                printf("As datas são iguais.\n");
            }
            else
            {
                printf("Dados invalidos\n");
            }
        }
    }
}