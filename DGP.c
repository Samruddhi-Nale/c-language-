#include<stdio.h>
int main() {
    // to print 100 50 25...
    int n,i;
    float t=100;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%f\n",t);
        t=t*0.5;
    }
    return 0;
}