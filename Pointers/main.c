#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Pointers */
    int age = 30;
    int * pAge = &age;

    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    printf("gpa's memory address: %p\n", &gpa);
    printf("grade's memory address: %p\n", &grade);
    return 0;
}
