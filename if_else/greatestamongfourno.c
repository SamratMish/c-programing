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
     int d;
    printf("Enter the value of fouryh:");
    scanf("%d",&d);

    if (a > b && a > c && a>d)
    {
        printf("a is greatest no");
    }
    if (b > c && b > a && b>d)
    {
        printf("b is greatest no");
    }
    if (c>a && c>b && c>d)
    {
        printf("c is greatest no");
    
    }
    else{
        printf("d is the greatest no");
    }
    
    return 0;
}