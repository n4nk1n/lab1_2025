#include <stdio.h>

//printf("\n");
//puts("");
//scanf("%d", &);

/*
Here is where I will be taking notes from Bro Codes course
*/

int main()
{
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); //tab and newline escape sequences
    double prices[12] = {14.1, 123.25, 3.63, 34.563, 16, 61.6, 7245, 73.3, 27.363, 935.5, 22.358, 3.82};
    for (int i = 0; i < 11; i++)
    {
        printf("%-8.3lf\n", prices[i]);
    }
    return 0;
}

/*
short < int < long
float < double
*/
