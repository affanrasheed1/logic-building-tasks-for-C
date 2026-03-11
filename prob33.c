#include<stdio.h>
/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.*/
int main(){
    int i=6;
    int* k=&i;
    int* *b=&k;

    printf("the value of i is %d\n ",*(*b));
    return 0;
}