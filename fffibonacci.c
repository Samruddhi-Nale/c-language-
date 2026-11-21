#include<stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n; i++){
        if(i==1){
            printf("The 1st fiboacci is %d.\n",a);
        }
        else if (i==2){
            printf("The 2nd fiboacci is %d.\n",b);
        }
        else{
            sum=a+b;
            printf("The %dth fiboacci is %d.\n",i,sum);
            a=b;
            b=sum;
        }
    }
    return 0;
}