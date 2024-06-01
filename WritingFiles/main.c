#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        r : read
        w : write / overwrite
        a : append
    */
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nOscar, something\nKelly, Customer Service");

    fclose(fpointer);


    return 0;
}
