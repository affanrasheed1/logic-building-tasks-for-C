#include<stdio.h>

int main(){
   int n, reverse=0,reminder;
    printf("enter a number \n");
    scanf("%d",&n);
    int org=n;
    for ( ; n!=0; n = n/10)
    {   
        reminder= n % 10;
        reverse= reverse *10+reminder;
    }

    if (org==reverse)
    {
        printf("It is a plaindrome \n");
    }
    else
    {
        printf("it is not a plaindrome\n");
    }
      

}