#include<stdio.h>
//Write a program to change the value of a variable to ten times of its current
//value.
int main(){
    int d=7;
    int* ptr= &d;
    printf("the value of d is %d\n",d);
    *ptr = *ptr * 10;
    printf("the value of d is %d\n",*ptr);
    return 0;

}