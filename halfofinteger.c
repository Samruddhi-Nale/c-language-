#include<stdio.h>
int main() {
    /*int x;
    printf("Enter a Number :");
     scanf("%d",&x);
    float x2=x;
    float y =x2/2;
    printf("%f",y);*/
    

    /*float x=5.7;
    int y=x;
    printf("%d\n",y);
    float z=x-y;
    printf("%f",z);*/


    float a;
    printf("Enter decimal number:");
    scanf("%f",&a);
    int b =a;
    printf("Integer part of given decimal number is %d\n",b);
    float x=a-b;
    printf("Fractional part of given number is %f\n", x);


    
    return 0;
}