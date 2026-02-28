#include<stdio.h>

int main(){
    int n, reverse=0,reminder;
    printf("enter a number \n");
    scanf("%d",&n);
    for ( ; n!=0; n = n/10)
    {   
        reminder= n % 10;
        reverse= reverse *10+reminder;
    }
    printf("reverse is %d",reverse);
}