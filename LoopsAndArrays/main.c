#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 3 Arrays with 2 elements each */
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    printf("Hello world!\n");
    return 0;
}
