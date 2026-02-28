#include<stdio.h>

int main(){
    /*Write a program to determine whether a character entered by the user is
lowercase or not.*/
char ch;
printf("Enter a charcter");
scanf("%c",&ch);
if (ch>=97 && ch <=122)
{
    printf("Character is lower case");
}
else
    printf("Character is not lower case");
    return 0;
}