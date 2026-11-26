/* #include<stdio.h>
int main() {
    int x = 8,y,z;
    y=--x;
    z=x--;
    printf("\n %d  %d  %d  ", x,y,z);
    return 0;
} */
#include<stdio.h>
int main() {
    int x=10;
    printf("%d ",x);
    printf("%d ",x++);   // x++ ---> use x, then increment
    printf("%d ",++x);    //++x ---> first increment then use  
    printf("%d ",x--);   // x-- ---> use x, then decrement
    printf("%d ",--x);    //--x ---> first decrement then use                                                                           
    return 0;
}