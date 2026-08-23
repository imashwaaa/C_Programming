#include <stdio.h>
int main() {
    //arithmetic operators
    int a = 10, b = 5;
    printf("Sum of %d and %d is %d\n",a,b,(a+b));
    printf("Difference of %d and %d is %d\n",a,b,(a-b));
    printf("Product of %d and %d is %d\n",a,b,(a*b));
    printf("Division of %d and %d is %d\n",a,b,(a/b));

    //increment and decrement operators
    int c=2;
    printf("Pre-increment: %d\n",++c);
    printf("Post-increment: %d\n",c++);
    printf("After-increment: %d",c);

    return 0;
}