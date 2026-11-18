#include<stdio.h>
int main() {
/*break statement is used to terminate the loop.
Ex.---> factors of 12 is 1,2,3,4,6,12
Take an example --> in above code if we put n=12 then for loop will iterative 6 times
(for factors 1,2,3,4,6,12) we want to stop the running of for loop when condition hits */
  int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){   // i is factor of n
            a=1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime nor composit.");
    else if(a==0) printf("Given number is prime.");
    else printf("Given number is composite.");
}       /* if given no is prime then for loop doesn't runs */