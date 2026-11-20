#include<stdio.h>
int main() {
    int n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n; 
    int ld = n%10;
    while(n<0 && n<=500) {
        ld = n%10;
        ld=ld*ld*ld;
        n++;
    }
    if(){

        printf("%d is Armstrong number.",a);
    }
    else{
        printf("%d is not Armstrong number.",a);
    }
    return 0;
}