#include<stdio.h>

int main (){
    int i,n,sum=0;
    printf("Enter a Num \n");
    scanf("%d",&n);
    for ( i = n; i >= 1 ; i--)
    {
        sum+=i;
        printf("%d\n",sum);
    }
    return 0;
}