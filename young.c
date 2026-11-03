#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter age of Ram:",a);
    scanf("%d",&a);
    printf("Enter age of Shyam:",b);
    scanf("%d",&b);
    printf("Enter age of Ajay:",c);
    scanf("%d",&c);
    if(a<b && a<c){
        printf("Ram is younger.");
    }
    if(b<a && b<c){
        printf("Shyam is younger.");
    }
    if(c<b && c<a){
        printf("Ajay is younger.");
    }
    return 0;
}