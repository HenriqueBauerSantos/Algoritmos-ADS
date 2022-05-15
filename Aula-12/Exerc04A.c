#include<stdio.h>
int main(){
    float i, nota, notas, media;
    do
    {
        printf("Digite a nota:\n");
        scanf("%f%*c",&nota);
        notas=(notas+nota);
        i++;
    } while (i<10);
    media=(notas/10);
    printf("A média das 10 notas é: %.2f.\n",media);
}