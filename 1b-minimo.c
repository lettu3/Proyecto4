#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int pedirEntero (void)
{
    int x;
    printf ("Y el valor pibe?\n");
        scanf ("%i", &x);
    return x;
}

int main(void)
{
    int x, y;
    x = pedirEntero ();
    y = pedirEntero ();

// {x = X, y = Y}
    assert ((x == x)&& (y == y));

    int res;
    if (x >= y)
    {
        res = y;
    }
    else
    {
        res = x;
    }

    assert((res == x) || (res == y));
// {res = X max Y}

    printf ("El minimo es %d", res);
    return 0;
}
