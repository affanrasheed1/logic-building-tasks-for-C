#include<stdio.h>
/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/
float avg(float* a ,float* b){
    return (*a + *b)/2;
}
float sum(float*a ,float*b){
    return *a+*b;
}
int main(){
    float x=5,y=9;
    printf("The average of two numbers %.2f\n",avg(&x,&y));
    
    printf("The sum of two numbers %.2f\n",sum(&x,&y));
    return 0;

}