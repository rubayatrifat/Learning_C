#include <stdio.h>


int main() {
    // Q: Printing multiplication table of dynamic number using for loop
    int multiplyNum;
    printf("Give a number to create multiplication table: ");
    scanf("%d", &multiplyNum);
    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d \n", multiplyNum, i, multiplyNum * i);
    }

    // Printing 20 times hello world using while loop
    int couNum = 1;
    while(couNum <= 20) {
        printf("%d. HELLO World \n", couNum);
        couNum++;
    }

    // Odd number giving loop
    int evenNum;
    do {
        printf("Give a Number: ");
        scanf("%d", &evenNum);
    } while(evenNum % 2 != 0);
    printf("Finali u have given a even");



    return 0;
}















