#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    /* %p gives the memory address where the content of the variable is stored */
    printf("age : %p\ngpa : %p\ngrade : %p", &age, &gpa, &grade);
    return 0;
}
