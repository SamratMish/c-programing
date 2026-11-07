#include <stdio.h>
int main()
 {int x1; 
    printf("Enter the value of x1");
    scanf("%d",&x1);
    int x2;
    printf("Enter the value ofx2");
    scanf("%d",&x2);
    int x3;
    printf("Enter the value ofx3");
    scanf("%d",&x3);
    int y1;
    printf("Enter the value ofy1");
    scanf("%d",&y1);
    int y2;
    printf("Enter the value of y2");
    scanf("%d",&y2);
    int y3;
    printf("Enter the value of y3");
    scanf("%d",&y3);
int m1 =(y2-y1)/(x2-x1);
int m2 =(y3-y2)/(x3-x2);
if(m1==m2){
    printf("it is a straight line");}
    else{printf("it not a straight line");}
    return 0;

}











