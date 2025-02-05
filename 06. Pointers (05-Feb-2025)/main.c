#include <stdio.h>

void calculateSq(int* num) {
    *num = (*num) * (*num);
    printf("square is : %d \n", *num);
}

void swapValue(int* aValue, int* bValue, int* c) {
    *c = *bValue;
    *bValue = *aValue;
    *aValue = *c;

    printf("'a' value = %d | 'b' value = %d \n", *aValue, *bValue);
}

int main() {
    int age = 45;
    int *pointer = &age;
    int _age = *pointer;
    printf("%d \n", _age);
    printf("%p \n", pointer);
    printf("%p \n", &age);
    printf("%u \n", &age);
    printf("%p \n", &pointer);
    printf("%u \n", &pointer);
    printf("%d \n", *pointer);
    printf("%d \n", *(&age));

    // Pointer to pointer
    int **pttp = &pointer;
    // Q:1 print value of i pointer to pointer
    int i = 1;
    int *p = &i;
    int **ptp = &p;
    printf("%d \n", **ptp);

    // Call by reference function using pointer
    int num = 5;
    calculateSq(&num);
    printf("%d \n", num);


    // Practice -> swap two variable value a and b
    int a = 3;
    int b = 7;
    int c;
    swapValue(&a, &b, &c);
    printf("a = %d | b = %d | c = %d \n", a, b, c);

    return 0;
}






