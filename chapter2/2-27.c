#include <stdio.h>
#include <stdlib.h>

int uadd_ok(unsigned x, unsigned y)
{
    unsigned s = x + y;
    return s >= x;
}

int main()
{
}