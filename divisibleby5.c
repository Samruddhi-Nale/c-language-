#include<stdio.h>
int main() {
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%5==0) {
        printf("number is divisible by 5");
    }
    else{
        printf("Number is not divisible by 5");
    }
return 0;
}