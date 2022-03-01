#include <stdio.h>
#include <stdlib.h>

int tadd_ok(int x, int y)
{
    int s = x + y;
    return !((x > 0 && y > 0 && s <= 0) || (x < 0 && y < 0 && s >= 0));
}

int main()
{
    printf("%d\n", tadd_ok((1 << 30), (1 << 30)));
    printf("%d\n", tadd_ok(1, 1));
}