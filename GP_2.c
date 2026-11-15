#include<stdio.h>
int main() {
    // to print 1, 2, 4, 8, 16, 32....
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //nTH term in gp is (a*r)^n-1
    /* int r;
    printf("enter common difference: ");
    scanf("%d",&r); */
    int a=1;
    for(int i =1; i<=n; i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}