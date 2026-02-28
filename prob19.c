#include<stdio.h>
/*
int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main (){
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if (n>0)
    {
        
        printf("factorial of %d is %d",n,factorial(n));
    }
    else
    printf("Enter a positive number\n");
}
    */
    // the above program shows how to calculate factorial of a number using funcition
int main(){
    int n , i ;
    long int fact=1;
    printf("Enter a number :\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {   
        if (n<0)
        {
            printf("please enter a positive number \n");
            break;
        }
        else
        fact= fact*i;
    }
    printf("factorial of %d is %d",n,fact);
}
