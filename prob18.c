#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
float dvd(float x, float y)
{
    return x / y;
}
int main()
{
    int a, b;
    char op;
    printf("Enter first numbers \n");
    scanf("%d", &a);
    printf("Enter the operation u want to perform /(-,+,*,/,mod)/\n");
    scanf("%c",&op);
    printf("Enter second numbers \n");
    scanf("%d", &b);
    switch(op){
        case'+':
        printf("the sum is %d\n", sum(a, b));
        break;
        case'-':
        printf("the sum is %d\n", sub(a, b));
        break;
        case'*':
        printf("the sum is %d\n", mul(a, b));
        break;
        case'/':
        printf("the sum is %d\n", dvd(a, b));
        default:
        printf("Enter a valid operator ");
    }    

}