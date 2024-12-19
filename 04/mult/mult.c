#include <stdio.h>

int main()
{
    int R0 = 5, R1 = 3, R2 = 0;

    while(R0 > R1)
    {
        R2 = R2 + R1;
        R0 = R0 - 1;
    }

    printf("R2 = %d", R2);
}