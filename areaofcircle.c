#include <stdio.h>
int main() // area of circle
{
    float pi = 3.14;
    float radius;
    printf("Enter the Value of radius:");
    scanf("%f", &radius);
    float area = pi * radius * radius;
    printf("%f", area);
    return 0;
}