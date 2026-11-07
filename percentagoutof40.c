#include <stdio.h>
int main()
{
    float sub1 = 37.5;
    float sub2 = 34.334;
    float sub3 = 39.625;
    float sub4 = 21.69;
    float sub5 = 32.854;

    float result = (sub1 + sub2 + sub3 + sub4 + sub5) / (40 * 5) * 100;
    printf("%f", result);
    return 0;
}