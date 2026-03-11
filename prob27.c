#include<stdio.h>
// swaping by call by refrence using functions
// beacuse a function can not change the value of a varialbe in main by call by value
int swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a=6,b=9;
    swap(&a,&b);
    printf("the value of a and b is %d %d",a ,b);
    return 0;
}