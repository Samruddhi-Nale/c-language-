#include<stdio.h>
int main() {
    int l;
    printf("Enter length:",l);
    scanf("%d",&l);
    int b;
    printf("Enter breadth:",b);
    scanf("%d",&b);
    int area = l*b;
    int perimeter= 2*(l+b);
    printf("Area is %d\n",area);
    printf("Perimeter is %d\n",perimeter);
    if(area > perimeter) {
        printf("area is greater than perimeter.");
    }
    if(area < perimeter) {
        printf("area is smaller than perimeter.");
    }
    if( area == perimeter) {
        printf("area and peimeter is equal.");
    }
    return 0;
}