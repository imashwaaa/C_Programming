#include <stdio.h>
int main() {
    //taking input x
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    //taking input y
    int y;
    printf("Enter value of y: ");
    scanf("%d", &y);

    //creating a temp variable
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d and %d are x and y",x,y);

    return 0;
}