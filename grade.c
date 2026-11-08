#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",b);
    scanf("%d",&b);
    printf("Enter third number:",c);
    scanf("%d",&c);
    if(a > b && a > c) {       // we can use && and || multiple times 
        printf(" Greatest no is %d",a);
    }
    if(b > a && b > c) {
        printf("greates no is %d",b);
    }
    if(c > a && c > b) {
        printf("greates no is %d",c);
    }
    return 0;
}