#include <stdio.h>
#include <stdlib.h>

int bis(int x, int m);
int bic(int x, int m);

// bis
// 0 0 0
// 0 1 1
// 1 0 1
// 1 1 1
// -> bis(x,m) == x|m

// bic
// 0 0 0
// 0 1 1
// 1 0 0
// 1 1 0
// -> bic(x,m) == ~(x|(~m))

int bis(int x, int m)
{
    return x | m;
}

int bic(int x, int m)
{
    return ~(x | (~m));
}

int bool_or(int x, int y)
{
    return bis(x, y);
}

int bool_xor(int x, int y)
{
    return bic(~x, ~y) | bic(x, y);
}

int main()
{
    int a = 34;
    int b = 123;
    printf("%d\n", bool_xor(a, b) == (a ^ b));
}