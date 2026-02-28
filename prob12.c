#include<stdio.h>

int main(){
   // Write a program to print multiplication table of a given number n.
   int i, n , pro=0;
   printf("Enter a number \n");
   scanf("%d",&n);
   for ( i = 1; i <= 10; i++)
   {
      pro = n * i;
      printf("%d\n",pro);
    }
   
}