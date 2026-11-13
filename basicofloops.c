#include<stdio.h>
int main () {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+3) {
        printf("Hello PW!\n");
    }
    return 0;
}
//SCOPE of variables -> in above code value of i is only "for loop" not for all code