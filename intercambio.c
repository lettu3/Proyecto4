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
    int x, y, z;
    x = pedirEntero ();
    y = pedirEntero ();
// {x = A && y = B}
    z = x;
    // Guardamos el valor 'A' de x en z
    x = y;
    //Le asignamos el valor 'B' de y a x
    y = z;
    //Le asignamos el valor 'A' a y
// {x = B && y = A}
    printf ("Ahora x = %d, y = %d", x, y);
    return 0;
}
