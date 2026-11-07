#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of first side:");
    scanf("%d", &a);
    int b;
    printf("Enter the value of second side:");
    scanf("%d", &b);
    int c;
    printf("Enter the value of third side:");
    scanf("%d", &c);
    if ((a + b) > c && (b+c) >a && (c+a)>b)
        {
            printf("it is a triangle");
        }
    else
    {
        printf("it is not a triangle");
    }
    return 0;
}