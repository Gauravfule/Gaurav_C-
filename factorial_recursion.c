#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n,r;
    printf("Enter the number= ");
    scanf("%d",&n);
    r=factorial(n);
    printf("\n Factorial of %d = %d",n,r);
    getch();
    return 0;

}
int factorial(int x)
{
    if(x==0 || x==1)
    return 1;
    else
    return x*factorial(x-1);
}