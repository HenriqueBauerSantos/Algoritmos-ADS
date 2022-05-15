#include<stdio.h>
int main(){
    int resu, num;
    printf("Digite de qual número deseja a tabuada:\n");
    scanf("%d%*c",&num);
    for (int i = 0; i <= 10; i++)
    {
        resu=(i*num);
        printf("%dX%d= %d\n",i+1,num,resu);
    }
}