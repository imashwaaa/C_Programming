#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    //asks for an input.

    printf("You are %d years old.\n",age);
    //prints the value of input.

    //taking a char input
    char ch;
    printf("Enter your fav letter: ");
    scanf("%c,&ch"); //taking a char input
    printf("You chose %c as a character\n",ch);//display the output
    
    return 0;
}