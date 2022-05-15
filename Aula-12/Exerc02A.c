#include<stdio.h>
int main(){
    int i=1000;
    while (i<=1500)
    {
        if (i%2==1)
        {
            printf("%d- É impar.\n",i);
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
}