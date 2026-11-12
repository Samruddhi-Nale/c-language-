#include<stdio.h>
int main() {
    int i = 10;
    /*while(i<10){
        printf("hello");
        i++;
    }*/
   /*In above code condition (which we can storeed at while loop) is not 
   satsfied so code doesn't execute*/
   do{
    printf("\n\nhello");
    i++;
    }
    while(i<10);
    return 0;
}