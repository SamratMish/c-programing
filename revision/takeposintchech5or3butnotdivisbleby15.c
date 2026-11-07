#include <stdio.h>
int main()
{
    int a;
    printf("value of a:");
    scanf("%d",&a);
    if((a%3==0 || a%5==0 )&& a%15!=0) {
        printf( " is div 5or3 but not 15") ; }
       else  {printf("  is not div 5or3 but not 15 ");}
       
return 0;
}