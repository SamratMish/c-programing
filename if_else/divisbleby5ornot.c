#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    if (x % 5 == 0) // condition
    {
        printf(" divisble by 5 ");
    }
    else
    {
        printf(" not divible by 5");
    }
    return 0;
}