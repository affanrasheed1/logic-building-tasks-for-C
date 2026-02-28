#include<stdio.h>

int main(){
    /*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/
    int i , n , sum=0 , pro=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        pro = n* i;
        sum += pro;
    }
    printf("sum is %d\n ",sum);

    return 0;
}