/* This code doesn`t work please check it*/#include<stdio.h>
int main() {
    double x;
    printf("Enter X coordinate:");
    scanf("%d",&x);
    double y;
    printf("Enter Y coordinate:");
    scanf("%d",&y);
    /*if(x == 0 && y == 0) {
        printf("Point lies on X-axis");
    }
    else if(x == 0) {
        printf("Point lies on Y-axis");
    }
    else if(y == 0){
        printf("Point is origin");
    }
    else{
        printf("Point does not lies on X or y axis");
    }*/

    if(x == 0){
        printf("point lies on y axis");
    }
    else if (y == 0){
        printf("point lies on x axis");
    }
    else if (x == 0 && y == 0){
        printf("point is origin");
    }
    else {
        ("Point does not lies on x or y axis");
    }
    return 0;
}