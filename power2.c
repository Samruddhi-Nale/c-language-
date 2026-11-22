#include<stdio.h>
int main() {
    int a;
    printf("Enter power:",a);
    scanf("%d",&a);
    int power=1;
    if(a==0)  {
        printf("2 raised to the power 0 is 1.\n");
    }
    else {
        for(int i=1; i<=a; i++){
            power=power*2;
            printf("2 raised to the power %d is %d.\n",i,power);
        }
    }
    return 0;
}