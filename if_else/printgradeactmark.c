#include <stdio.h>
int main()
{ float x;
printf("enter the value of x");
scanf("%f",&x);
// if(x>91 && x<100) {printf("Excellent");}
// else if(x>=81 && x<=90) {printf("verygood");}
// else if (x>=71 && x<=80) {printf("good");}
// else if (x>=61 && x<=70) {printf("can do better");}
// else if (x>=51 && x<=60) {printf("avrage");}
// else if (x>=41 && x<=50) {printf("bellow Average");
// }
// else {printf("Fail");
if(x>=91)  {printf("Excellent");}
else if(x>=81 ) {printf("verygood");}
else if (x>=71 ) {printf("good");}
 else if (x>=61)  {printf("can do better");}
 else if (x>=51 )  {printf("avrage");}
 else {printf("Fail");}

return 0;
}