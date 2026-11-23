#include<stdio.h>
int main() {
    int num,digits;
    printf("Enter a number:");
    scanf("%d",&num);
    int sum = 0; 
    while(num>0) {
        digits = num % 10;
        if(digits % 2 == 0){
            sum = sum + digits;
        }
        num=num/10;
    }
    printf("the sum of even digits numbers is %d", sum);
    return 0;
}