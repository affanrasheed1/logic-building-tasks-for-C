#include<stdio.h>
//Write a program to print the address of a variable. Use this address to get the
//value of the variable.
int main(){
    int a =95;
    int* ptr= &a;
    printf("the address of a is %p\n",&a);
    printf("the value of a is %d\n",*ptr);
}