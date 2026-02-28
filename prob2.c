#include<stdio.h>
int main(){
    float celcius,faren;
    printf("Enter temperature in celsius\n");
    scanf("%f",&celcius);
    faren=(celcius*9/5)*32;
    printf("Temperature in farenheit is %f",faren);
    return 0;
}