#include<stdio.h>
int main (){
    float notaTrab, avalia, exame, media;
    printf("Digite a nota do trabalho de laboratório:\n");
    scanf("%f%*c",&notaTrab);
    printf("Digite a nota da avaliação semestral: \n");
    scanf("%f%*c",&avalia);
    printf("Digite o valor da nota do exame final: \n");
    scanf("%f%*c",&exame);
    media = ((notaTrab*2)+(avalia*3)+(exame*5))/10;
    printf("Sua média é: %.2F\n",media);
    if (media>=8){
        printf("Obteve o conceito A\n");
    }
    else if (media>=7 && media<8){
        printf("Obteve o conceito B\n");
    }
    else if (media >=7 && media<6){
        printf("Obteve o conceito C\n");
    }
    else if (media>=6 && media<5){
        printf("Obteve o conceito D\n");
    }
    else
        printf("Obteve o conceito E\n");
}