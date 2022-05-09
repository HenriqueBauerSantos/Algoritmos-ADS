#include<stdio.h>
int main(){
    float notaA, notaB, notaC, media, notaTirar;
    printf("Digite o valor da nota 1: \n");
    scanf("%f%*c",&notaA);
    printf("Digite o valor da nota 2:\n");
    scanf("%f%*c",&notaB);
    printf("Digite o valor da nota 3:\n");
    scanf("%f%*c",&notaC);
    media = (notaA+notaB+notaC)/3;
    notaTirar = (12-media);
    if (media>=7 && media <10){
        printf("Aprovado\n");
    }
    else if (media<7 && media>=3){
        printf("Exame\n");
        printf("Vc precisa tirar a nota %.2f para passar",notaTirar);
    }
    else if (media>=0){
        printf("Reprovado\n");
    }
    else
        printf("Dados invalidos\n");
}