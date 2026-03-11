#include<stdio.h>
/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/
int varadd(int* ptr){
    printf("the address of i is %u\n",ptr);
}
int main(){
    int i=87 ;
    int* ptr= &i;
    printf("the address of i is %u\n",&i);
    varadd(ptr);
}