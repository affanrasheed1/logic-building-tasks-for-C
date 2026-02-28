#include<stdio.h>

int main(){
    int i=0,n,sum=0;
    printf("Enter a number till u want sum of natural numbers\n");
    scanf("%d",&n);
    while (i<=n)
    {   
        i++;
        sum += i;
        printf("%d\n",sum);
    }
    return 0;
}