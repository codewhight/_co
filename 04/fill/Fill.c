#include <stdio.h>

int main()
{
    FOREVER:
        int i = 16384;
        //SCREEN 在記憶體的第一個位置是 16384

        int M[100000] = {0};
        //記憶體的預設值

    WHILE:
        if(i >= 24576) 
            goto WEND;
        //SCREEN 在記憶體的最後一個位置是 24575 超過/等於 24576就結束

        int color = 0;
        //預設為白色

        if(M[24576] == 0) 
            goto NEXT;
        //鍵盤在記憶體的最後一個位置是 24576 當未被點擊時 執行NEXT

        color = -1;
        //按下鍵盤後預設顏色為黑

    NEXT: //沒有按鍵盤就執行 (螢幕為白)
        M[i] = color;
        i++;
        goto WHILE;
        //依序讓SCREEN變0

    WEND:
        goto FOREVER;
        //結束

}