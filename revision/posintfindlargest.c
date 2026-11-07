#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("value of a:");
    scanf("%d",&a);
    printf("value of b:");
    scanf("%d",&b);
    printf("value of c:");
    scanf("%d",&c);
     printf("value of d:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf( "a is greater") ; }
       else if (b>a && b>c && b>d)  {printf(" b is greater ");}
       else if (c>a && c>b && c>d) {printf("c is greater");}
       else {printf("d is greater ");}
       
        
    

return 0;
}