#include <stdio.h>
int main()
{
    int x;
    printf("value of x:");
    scanf("%d",&x);
    if(x%3==0 || x%5==0 ){
        printf( "x is divisible by 5or3") ; }
        else {printf("x is not divisible by 5or 3");}
        
    

return 0;
}