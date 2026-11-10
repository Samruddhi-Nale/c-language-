#include<stdio.h>
int main() {
    int a;
    printf("Enter a number:",a);
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        if(a %15!=0)   printf("No is divisible by 5 or 3 but not 15.");
        else  printf("No is divisible by 15.");
        }
    else{
        printf("No is not divisible by 5 and 3.");
    }




    // if(a%5==0 || a%3==0 && a%15!=0) {             // priority of && is more than || that's why these code not works properly
    //     printf("No is divisible by 5 or 3 but not 15.");             // && and || both called as logical operators
    // }
    // else{
    //     printf("No is not matching the condition.");
    // }



    /* if((a%5==0 || a%3==0) && a%15!=0) {            
        printf("No is divisible by 5 or 3 but not 15.");            
    }
    else{
        printf("No is not matching the condition.");
    }*/
    return 0;
}