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
    printf("After-increment: %d\n",c);

    //relational operators
    int k=2;
    printf("%d\n",a>b);//output 1
    printf("%d\n",a<b);//output 0
    printf("%d\n",c==k);//output 0(bcz c value changed after increment)
    printf("%d\n",a!=b);//output 1

    //logical operators
    printf("%d\n", (a > b) && (a == 10));//output 1
    printf("%d\n", (a < b) || (b == 5));//output 1
    printf("%d\n", !(a > b));//output 0
    printf("%d\n", (a == 10) && (b > 10));//output 0

    return 0;
}