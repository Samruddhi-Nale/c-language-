#include<stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count = 0;
    while(n!=0) {
        n=n/10;
        count++;
    }
    printf("the no of digits are %d",count);
    return 0;
}
/* let n is 1234. whie condition says that n!=0 the iterate the code which 
will present in loop 
In 1234 when 1\10 becomes 0 then loop stop execution. */