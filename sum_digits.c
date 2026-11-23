#include<stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0; 
    int ld = n%10;
    while(n!=0) {
        ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    printf("the sum of numbers is %d", sum);
    return 0;
}