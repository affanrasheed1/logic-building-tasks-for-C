#include<stdio.h>
int main(){
   /* Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
  float income,tax=0;
    printf("Enter your income\n");
    scanf("%f",&income);
if (income <=250000)
{
    tax=0;
}
else if (income >250000 && income<=500000)
{
    tax=0.05 * (income - 250000);
}
else if (income >500000 && income<=1000000)
{
    tax= (0.05 * 500000)+ (income-1000000)*0.20;

}
else
   tax = (0.05 * 250000)+ (0.20*500000)+ (income-1000000)*0.30;

    printf("The tax you have to pay is %.2f \n",tax);
    return 0;
}