#include <stdio.h>


int main() {
    // Q: Printing multiplication table of dynamic number using for loop
    int multiplyNum;
    printf("Give a number to create multiplication table: ");
    scanf("%d", &multiplyNum);
    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d \n", multiplyNum, i, multiplyNum * i);
    }




    return 0;
}















