#include <stdio.h>



int main(void)
{
    for(int x = 0; x <= 255; x++)
    {
        printf("[%d]: %c\n", x, x);
    }
    getchar();
    return 0;
}