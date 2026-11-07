#include <stdio.h>
int main()
{
    int Ram;
    printf("Enter the age of first :");
    scanf("%d", & Ram);
    int Shyam;
    printf("Enter the age of second :");
    scanf("%d", & Shyam);
    int Ajay ;
    printf("Enter the age of third :");
    scanf("%d", & Ajay);
    if (Ram<Shyam && Ram<Ajay) { printf("Ram is Younger");}
    if (Shyam<Ajay && Shyam<Ram) {printf("Shyam is Younger");}
    if ( Ajay<Ram && Ajay<Shyam) {printf(" Ajay is Younger");}
    return 0;
}