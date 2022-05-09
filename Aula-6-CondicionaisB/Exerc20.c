#include<stdio.h>
int main (){
    int id;
    printf("Digite a idade:\n");
    scanf("%d%*c",&id);
    if (id<5)
    {
        printf("Idade não permitida.\n");
    }
    else if (id>=5 && id<=7)
    {
        printf("Categoria Infantil.\n");
    }
    else if (id>=8 && id<=10)
    {
        printf("Categoria Juvenil.\n");
    }
    else if (id>=11 && id<=15)
    {
        printf("Categoria Adolescente.\n");
    }
    else if (id>=16 && id<=30)
    {
        printf("Categoria Adulto.\n");
    }
    else if (id>30)
    {
        printf("Categoria Sênior.\n");
    }
    else
    {
        printf("Dados invalidos.\n");
    }
}