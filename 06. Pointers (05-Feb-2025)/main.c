#include <stdio.h>


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

    return 0;
}






