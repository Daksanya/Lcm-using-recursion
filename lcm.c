#include<stdio.h>

int lcmfunc(int, int);

int main()
{
    int a, b, lcm;
    printf("\nInput first number:");
    scanf("%d",&a);
    printf("\nInput second number:");
    scanf("%d",&b);
    lcm = lcmfunc(a,b);
    printf("\nLCM of %d and %d is: %d\n\n", a, b, lcm);
    return 0;
}
 int lcmfunc(int a, int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcmfunc(a,b);
        return temp;
    }
}
