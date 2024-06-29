#include <stdio.h>

int main(void)
{
    int scores[3] = {10, 20, 30};
    printf("%p\n", &scores[0]); 
    printf("%p\n", &scores[1]);
    printf("%p\n", scores); 
    printf("%p\n", &scores[2]);
}
