#include <stdio.h>
int main()
{
 int x,y ;
 printf("enter the value of x");
 printf("/nenter the value of y");
 scanf("%d %d", &x, &y);
 if(x==0 && y==0)
 {printf("x is on origne");
}
else if (x==0)
{printf("point lie on y axis");}
else if (y==0) {printf("point lie on x axis");}
else {printf("co ordinate does not lie of x or y");}
return 0;

}