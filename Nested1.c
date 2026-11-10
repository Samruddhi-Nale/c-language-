#include<stdio.h>
int main() {
    int a;
    printf("Enter a number:",a);
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
            printf("No is divisible by 5 and 3.");
        }
        else{
            printf("No is not divisible by 5 and 3.");
        }
    }
    else{
        printf("No is not divisible by 5 and 3.");
    }
    return 0;
}