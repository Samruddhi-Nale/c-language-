#include <stdio.h>
int main() {
    float principal,rate,time,si; 
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time(in year): ");
    scanf("%f", &time);
    si=(principal*rate*time)/100;
    printf("Your simple interest is: %f",si);
    return 0;
}