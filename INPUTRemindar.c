#include<stdio.h>
int main() {
    int a,b;    // a > b
    printf("Enter Divident:");
    scanf("%d",&a);
    printf("Enter Divisor:");
    scanf("%d",&b);
    // int q= a /b;
    // int r=a - b*q;   //Divisor * Quotient + Remindar=Divident
    // printf("The remindar when %d is divided by %d is  %d",a,b,r);
    int r = a % b;
    printf("The remindar when %d is divided by %d is  %d",a,b,r);
    return 0;
}