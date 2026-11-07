#include <stdio.h>
int main() // Find the volume of sphere

{
   float pi = 3.14;
   float radius;
   printf("Enter the value of radius:");
   scanf("%f", &radius);
   float volume = (4 / 3.0 * pi * radius * radius * radius);
   printf("%f", volume);
   return 0;
}