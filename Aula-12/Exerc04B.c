#include<stdio.h>
int main(){
    float nota,notas,media;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a %dª nota:\n",i+1);
        scanf("%f%*c",&nota);
        notas=(notas+nota);
    }
    media=(notas/10);
    printf("A media dos 10 alunos é: %.2f.\n",media);
}