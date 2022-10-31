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

int main (void)
{   int x, y;
    x = pedirEntero ();
    y = pedirEntero ();
// {x = X, y = Y}
    int b;
    b = x;
    x = x + 1;
    y = y + b;
// {x = X + 1, y = X + Y}

    printf("Ahora x = %d, y = %d", x, y);
    return 0;
}