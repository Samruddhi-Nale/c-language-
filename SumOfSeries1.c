#include<stdio.h>
int main() {
    /*1-2+3-4+5.....
    odd numbers -> add
    even numbers -> substracted*/
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    /*for(int i=1; i<=n;i++){
        if(i%2!=0)      sum=sum+i;
        else            sum=sum-i;    
    }*/

    if(n%2==0)      sum=-n/2;
    else            sum=(-n/2)+n;
    printf("The sum of series is %d.",sum);
    return 0;
}