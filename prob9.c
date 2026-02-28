#include<stdio.h>

int main (){
    int i,n;
    printf("Enter a number till u want natural numbers\n");
    scanf("%d",&n);
    for ( i = 1; i <= n ; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}