#include <stdio.h>
int main() {

//this is a comment.
printf("Variables are containers to store data\n");

int num1; //creating of a variable and specifying its data type.
num1 = 2; //assignment of value in that variable.
printf("%d is an integer.\n",num1); //printing the variable.

printf("Floats are decimal type of numbers.\n");
float num2 = 26.66;
printf("%.2f is a float.\n",num2);

//chars
char ch= 'S';
printf("char is some letter/character in your keyboard\n");
printf("%c is a char.\n",ch);

    return 0;
}