#include <stdio.h>
int main() {
    //taking inputs
    int length, breadth, area, peri;
    printf("Enter length of rectangle: ");
    scanf("%d",&length);
    printf("Enter breadth of rectangle: ");
    scanf("%d",&breadth);

    //calculating area and perimeter
    area = (length*breadth);
    printf("Area of rectangle = %d units\n",area);
    peri = (2*(length+breadth));
    printf("Perimeter of rectangle = %d units\n",peri);

    return 0;
}