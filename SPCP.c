#include<stdio.h>
int main() {
    int a;
    printf("Enter cost price:",a);
    scanf("%d",&a);
    int b;
    printf("Enter selling price:",b);
    scanf("%d",&b);
    if(a<b) {
        printf("Profit");
    }
    if(a>b) {
        printf("loss");
    }
    if(a==b) {
        printf("no profit, no loss");
    }
    return 0;
}