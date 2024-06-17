#include <stdio.h>

int main() {
    int i = 5;
    int *p = &i;
    printf("iのアドレスは%p\n", &i);
    printf("pの値は%p\n", p);
    printf("iの値は%d\n", i);
    printf("*pの値は%d\n", *p); // *pという表記でも変数iにアクセスできる
    return 0;
}
