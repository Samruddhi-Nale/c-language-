#include<stdio.h>
int main() {
    int n;          // n timesloop will execute
    printf("Enter a number: ");
   scanf("%d",&n);
   /*4,7,10, 13, 16, 19........
   in above AP a(first term is 4) is 4 and d(common difference) is 3.
   wkt, nTH term is aN+(n-1)d */
    for(int i=4; i<=(3*n+1); i=i+3) {
        printf("%d ",i);
    }
   
    // We are use extra varible
    /*int a=4;
    a=a+3;
    printf("%d\n",a);*/
    return 0;
}