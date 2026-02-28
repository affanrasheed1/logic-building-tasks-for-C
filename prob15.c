#include<stdio.h>

int main(){
    int i=0,n,sum=0;
    printf("Enter a number till u want sum of natural numbers\n");
    scanf("%d",&n);
    do
    {   
        i++;
        sum += i;
        printf("%d\n",sum);
    }while (i<=n);
    return 0;
}