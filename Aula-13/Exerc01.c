#include<stdio.h>
int main(){
    float nota, notas=0, media=0;
    int i=0;
    do
    {
        printf("Digite a nota:\n");
        scanf("%f%*c",&nota);
        if (nota>=0)
        {
            notas=(nota+notas);
            i++;
        } 
        else
        {
            break;
        }
    } while (nota>=0);
    media=(notas/i);
    printf("A média da turma é %f.\n",media);
}