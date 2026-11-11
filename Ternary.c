#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    /*if(n%2==0) {
        printf("even number"); }
    else {
        printf("odd number"); } */ 


    // we can make code of one line by the use of ternary operator.
    // syntax -->Expression1 ? Expression2 : Expression3
    n%2==0 ? printf("even number") : printf("odd number");
    return 0;
}