#include <stdio.h>


int main() {
    // Q: Checking adult or not
    printf("Input u'r age: ");
    int age;
    scanf("%d", &age);
    if(age > 0 && age < 18) {
        printf("U r not a adult bro... \n");
    } else {
        printf("u r a adult \n");
    }

    // same thing using ternary operator
    age > 18 ? printf("adult \n") : printf("not adult \n");

    // Day name using witch
    printf("Input a day of week: ");
    int day;
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Saturday \n");
                break;
        case 2: printf("Sunday \n");
                break;
        case 3: printf("Monday \n");
                break;
        case 4: printf("Tuesday \n");
                break;
        case 5: printf("Wednesday \n");
                break;
        case 6: printf("Thursday \n");
                break;
        case 7: printf("Friday \n");
                break;
        default : printf("Not a valid day \n");
    }

    // Pass Fail
    printf("Enter the mark of u'r xm :");
    int marks;
    scanf("%d", &marks);
    if(marks > 30 && marks <= 100) {
        printf("Broo ur passed");
    } else if(marks > 0 && marks <= 30) {
        printf("U r failed");
    } else {
        printf("Not a valid mark");
    }


    return 0;
}















