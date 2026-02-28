#include<stdio.h>

int main(){
   /* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/
    float sub1,sub2,sub3,TM;
    printf("Enter marks of subject1\n");
    scanf("%f",&sub1);

    printf("Enter marks of subject2\n");
    scanf("%f",&sub2);

    printf("Enter marks of subject3\n");
    scanf("%f",&sub3);
    TM=(sub1+sub2+sub3)/3;
    printf("Your total marks are %.2f",TM);
    if (TM>=40 && sub1>33 && sub2 >33 && sub3>33)
    {
        printf("You are pass");
    }
else 
        printf("you are fail");
    
}