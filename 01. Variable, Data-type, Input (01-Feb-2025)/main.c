#include <stdio.h>


int main() {
    // Data Types
    int num = 3;
    char star = '*';
    float pi = 3.14;

    printf(" This is number %d \n This is a star %c \n This is a float %f \n", num, star, pi);


    // Inputs
    int num1, num2;
    printf("Enter the 1st num: ");
    scanf("%d", &num1);
    printf("Enter the 2nd num: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);

    return 0;
}
