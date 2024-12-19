#include <stdio.h>

int mMin()
{
    int R0 = 5;// system set
    int R1 = 3;// system set
    int R2 = 0;// @2 M=0


    loop:// (loop)
        if(R0 <= 0) goto exit1;// @0 D = M @exit1 D;JLE
        R2 = R2 + R1;// @1 D = M @2 M = M + D
        R0 = R0 - 1;// @0 M = M - 1
        
        goto loop;// loop 0; JUP

    exit1:
        printf("R2 = %d\n", R2);

}