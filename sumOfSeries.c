#include<stdio.h>
int main() {
    int n,sum,d=1;
    printf("Enter a number of terms:",n);
    scanf("%d",&n);
    // 1+2+3+4......n
    for(int i=1; i<=n;i++){
        sum=2+(n-1)*d;        // this is formila of ap we can solve them without using this formula
        sum=(sum*n)/2;
        printf("Sum of %d is %d.",n,sum);
        break;
    }
    return 0;
}