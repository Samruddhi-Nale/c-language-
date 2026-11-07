#include<stdio.h>
int main() {
    int x;                               //creation of box whose name is x
    printf("Enter a number:");
    scanf("%d",&x);                     //taking value in box
    /*if (x%2==0)  {                     //even
        printf("number is even");
    }
    if (x%2!=0); {                     //odd
        printf("number is odd");
    }*/


    /*if (x%2==0)  {
        printf("number is even");
    }
    else{
        printf("number is odd");
    }*/


    
    if(x%5==0)      printf("number is divisible by 5");
    else    printf("Number is not divisible by 5");
    return 0;
    
}