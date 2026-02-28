#include<stdio.h>
#define PI 3.14159
int main(){
    //float area , radius;
    //printf("Enter the radius if the circle\n");
   //scanf("%f"//,&radius);
    //area=PI*radius*radius;
    //printf("The area of the cirlce having radius %f is %f",radius, area );
    float volume, radius, height;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);

    printf("Enter the length of the circle\n");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    
    printf("The volume of the cirlce %f\n", volume);
    return 0;
}