#include<stdio.h>

int main(){
   // Write a program to print multiplication table of 10 in reversed order
   int i, n , pro=0;
   printf("Enter a number \n");
   scanf("%d",&n);
   for ( i = 10 ; i >= 1; i--)
   {
      pro = n * i;
      printf("%d\n",pro);
    }
   

}