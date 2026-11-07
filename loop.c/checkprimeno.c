// wap to check no is prime or not
#include <stdio.h>
int main()
{ int x;
printf("enter value of x");
scanf("%d",&x);
int a=0;
for(int i=2;i<=x-1;i++)
{if(x%i==0) { a=1;
break;}}
if (a==0) {printf("no is prime");} 
else{printf("composite no");}

return 0;
}