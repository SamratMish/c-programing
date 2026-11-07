include < stdio.h >
int main()
   {
    int n;
    printf("value of n");
    scanf("%d",&n); 
    if (n%5==0 || n%3==0){
        printf(" it is divisble");
    }
    else{printf("not divisle");
    }
    return 0;
  }