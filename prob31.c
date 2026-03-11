#include<stdio.h>
//Write a function and pass the value by reference.
void passvalue(int* a){
    *a=5;
    printf("the value of a is %d",*a);
}
int main (){
    int x=6;
    passvalue(&x);
    return 0;
}