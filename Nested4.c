#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter age of Ram:",a);
    scanf("%d",&a);
    printf("Enter age of Shyam:",b);
    scanf("%d",&b);
    printf("Enter age of Ajay:",c);
    scanf("%d",&c);
    if(a<b) 
    {
        if(a<c)
            printf("Ram is young",a);
        else
            printf("Ajay is young",c);
    }
    else
    {
        if(b<c)
            printf("Shyam is young",b);
        else
            printf("Ajay is young",c);
    }
    return 0;
}