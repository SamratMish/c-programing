#include <stdio.h >

int main()
{
    float Sp;
    printf("Enter the value of Sp:");
    scanf("%f", &Sp);
    float Cp;
    printf("Enter the value of Cp: ");
    scanf("%f", &Cp);
    if (Sp > Cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}