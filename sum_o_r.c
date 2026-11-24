#include<stdio.h>
int main() {
    int n,o,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    o=n;
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    //r=r/10;
    printf("The reverse number is %d.\n",r);
    sum=o+r;
    printf("Sum of %d and %d is %d",o,r,sum);
    return 0;
}