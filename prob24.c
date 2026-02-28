#include<stdio.h>

/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2*/

float force(float mass,float gravity){
    printf("Enter mass of the body\n");
    scanf("%f",&mass);
    return mass*gravity;
}

int main(){
    int mass,gravity=9.8;
    printf("Force is %.2f",force(mass,9.8));
}