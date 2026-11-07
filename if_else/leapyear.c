#include <stdio.h>
int main() // for leap year no is divible and not divible by 100

{
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    if (x % 400 == 0)
        printf("leap year");
    else

    {
        printf("not leap year");
    }

    else
    { 
        if (x % 100 == 0)

            printf(" not leap year");
    }
    else
    {
        printf("leap year");
    }
    else
    {
        if (x % 4 == 0)
            printf("leap year");
    }
    else
    {
        printf( "not leap year");
    }
    return 0;
}
