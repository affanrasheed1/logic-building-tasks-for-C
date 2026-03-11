#include<stdio.h>
// how to sawp a values of two intergers using a temporary varaible
int main(){
    int a,b,temp;
    a=9;
    b=6;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a and b is %d %d \n",a,b); 
    return 0;
}