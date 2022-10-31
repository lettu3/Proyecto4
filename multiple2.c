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
{   int x, y, z;
    x = pedirEntero ();
    y = pedirEntero ();
    z = pedirEntero ();
//{x = X, y = Y, z = Z}
    int b, c;
    b = x;
    c = z;
    z = x + y;
    x = y;
    y = b + c + y;
//{x = Y, y = Y + X + Z, z = Y + X}
    
    printf("Ahora x = %d, y = %d, z = %d", x, y, z);
    return 0;
}