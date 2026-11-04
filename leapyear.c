#include<stdio.h>
int main() {
    int x;
    printf("enter the year:");
    scanf("%d",&x);
    if(x%4==0) {
        printf("Year is leap year");
    }
    else{
        printf("Year is not leap year");
    }
    return 0;
}