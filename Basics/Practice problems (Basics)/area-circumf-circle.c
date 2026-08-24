#include <stdio.h>
#include <math.h>
int main() {
    //getting the input
    int r, area, circumf;
    printf("Enter radius: ");
    scanf("%d",&r);

    //generating output
    area = 3.14*(r*r); 
    circumf = 2*3.14*r;
    printf("Area of circle = %d units\n",area);
    printf("Circumference of circle = %d units\n",circumf);

    return 0;
}