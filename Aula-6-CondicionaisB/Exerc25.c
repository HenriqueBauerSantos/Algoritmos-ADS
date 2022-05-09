#include<stdio.h>
int main () {
    float h,hf ,ht , hm,sal;
    printf("Digite o número de horas extras:\n");
    scanf("%f%*c",&h);
    printf("Digite as horas que faltou ao trabalho:\n"),
    scanf("%f%*c",&hf);
    ht = (h-((2/3)*hf));
    hm =(ht*60);
    if (hm>=2400)
    {
        printf("Gratificação era de: 500,00.\n");
    }
    else if (hm>=1800 && hm<2400)
    {
        printf("Gratificação era de: 400,00.\n");
    }
    else if (hm>=1200 && hm<1800)
    {
        printf("Gratificação era de: 300,00.\n");
    }
    else if (hm>=600 && hm<1200)
    {
        printf("Gratificação era de: 200,00.\n");
    }
    else if (hm<600)
    {
        printf("Gratificação era de: 100,00.\n");
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}