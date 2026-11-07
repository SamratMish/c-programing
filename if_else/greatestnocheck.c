#include <stdio.h>
int main()
{

    int a;
    printf("Enter the value of first:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of second:");
    scanf("%d",&b);
    int c;
    printf("Enter the value of third:");
    scanf("%d",&c);
    if (a > b && a > c)
    {
        printf("a is greatest no");
    }
    if (b > c && b > a)
    {
        printf("b is greatest no");
    }
    else
    {
        printf("c is gretest no");
    }
    return 0;
}