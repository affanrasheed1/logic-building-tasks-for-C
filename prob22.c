#include<stdio.h>
//Write a program using function to find average of three numbers.
float avg(int a ,int b , int c){
    printf("Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    return (a+b+c)/3.0;//you should write 3.0 because division should be in same data type other wise answer may be wrong.
}
int main(){
    int a ,b ,c;
    printf("average of three numbers is %.2f",avg(a,b,c));
}