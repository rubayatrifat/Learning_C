#include <stdio.h>

void printHlw();
void printBon();
int numSum(int num1, int num2);
void multiplyTable(int num);

// Recursion
void recursive(int count);

int main() {
    // Q: Printing bonjorr if user is french and print hello if user is american

    char userIs;
    printf("Write 'f' if french and write 'a' for american : ");
    scanf("%c", &userIs);

    if (userIs == 'f') {
        printBon();
    } else if (userIs == 'a') {
        printHlw();
    } else {
        printf("This is not valid \n");
    }

    // Q: 2 number sum
    int a, b;
    printf("Enter the first num: ");
    scanf("%d", &a);
    printf("Enter the second num: ");
    scanf("%d", &b);

    int sumResult = numSum(a, b);
    printf("The sum is %d \n", sumResult);

    multiplyTable(sumResult);

    recursive(0);

    return 0;
}


void printHlw() {
    printf("Hello \n");
}

void printBon() {
    printf("Bonjourr \n");
}

int numSum(int num1, int num2) {
    return num1 + num2;
}

void multiplyTable(int num) {
    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d \n", num, i, num * i);
    }
}

// Recursion
void recursive(int count) {
    if(count == 10) {
        return;
    }
    printf("%d. Hello world \n", count);
    recursive(count + 1);
}







