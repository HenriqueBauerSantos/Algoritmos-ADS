#include<stdio.h>
int main(){
    for (int i = 1000; i <= 1500; i++)
    {
        if (i%2==1)
        {
            printf("%d- É impar.\n",i);
        }
        else
        {
            continue;
        }
    }
    
}