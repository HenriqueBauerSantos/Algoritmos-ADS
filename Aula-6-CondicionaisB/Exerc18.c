#include<stdio.h>
int main (){
    int id;
    printf("Digite sua idade:\n");
    scanf("%d%*c",&id);
    if (id<18)
    {
        printf("De menor.\n");
    }
    else
    {
        printf("Maior de idade.\n");
    }
}