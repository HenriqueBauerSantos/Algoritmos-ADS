#include <stdio.h>
int main (){
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1\n");
    scanf("%f%*c",&nota1);
    printf("Digite a nota 2\n");
    scanf("%f%*c",&nota2);
    printf("Digite a nota 3\n");
    scanf("%f%*c",&nota3);
    media = (nota1+nota2+nota3)/3;
    printf("A media das notas são: %.2f\n",media);
    if (media>=7){
        printf("Vc foi aprovado\n");
        printf("Parabéns!\n");
    }
    else if (media >6 && media <7){
        printf("Vc pegou recuperação\n");
    }
    else if(media <3){
        printf("Vc reprovou sumariamente\n");
    }
    
    else{
        printf("Vc foi  reprovado\n");
        printf("Refaça sua matricula\n");
    }
}