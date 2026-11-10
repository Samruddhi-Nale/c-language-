#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",b);
    scanf("%d",&b);
    printf("Enter third number:",c);
    scanf("%d",&c);
    if(a>b)                    // b is out of race
    {       
        if(a>c)
            printf("%d is greatest",a);
        else                    // a<c   -->  b < a < c
            printf("%d is greatest",c);
    }
    else                         //b>a --> now a is not greatest among them
    {              
        if(b>c)
            printf("%d is grestest",b);
        else                       //c>b --> a < b < c
            printf("%d is greatest",c);
    }
    return 0;
}   