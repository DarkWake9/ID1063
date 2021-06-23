#include <stdio.h>

int main(void)
{
    enum weekday_t {M, T, W, Th, Fr, Sa, Su};
    enum color_t {R, G, B, I};

    enum weekday_t w;
    enum color_t c;
    w=M;
    c=B;
    printf("%d, %d", w, c);
}