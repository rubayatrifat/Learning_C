#include <stdio.h>


int main() {
    // Q: is that a will 1 or 2
    int a = (int) 1.99999999;
    printf("%d \n", a);

    /* Priority of operators:
        most priority:*, /, %
        then: +, -
        then: =
    */

    int pri = 5 + 3 * 8; // it can be 64 or 29
    printf("%d \n", pri); // For operator priority it became 29
    /*
    More Operators,,,
    comparison operator ==, >, >=, <, <=, !=
    logical operator &&, ||, !
    assignment operators,,, =, +=, -=, *=, /=, %=
    */

    printf("%d \n", 3 >= 3);
    printf("%d \n", 3 >= 3 && 4 < 5);
    printf("%d \n", !(3 >= 3) && 4 < 5);

    // Q:1 - Write a program to check if a is divisible by to or not
    int inputedNum;
    printf("Give a num to check,, is the number is divisible to 2 or not: ");
    scanf("%d", &inputedNum);
    printf("%d", (inputedNum % 2) == 0);


    return 0;
}
