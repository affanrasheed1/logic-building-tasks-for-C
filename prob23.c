#include<stdio.h>
float conversion(float celcius){
    printf("Enter temperature in celsius\n");
    scanf("%f",&celcius);
    return (celcius*9/5)*32;

}
int main(){
float celcius;
    printf("Temperature in farenheit is %.2f",conversion(celcius));
    return 0;

}    