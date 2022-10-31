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

int suma_hasta (int N)
{
    int sum;
    sum = (N * (N + 1)) / 2;
    return sum;
}

int main (void)
{
    int n;
    n = pedirEntero ();
    assert (n >= 0);
    int sumanat;
    sumanat = suma_hasta (n);

    printf ("La suma de los primeros %d numeros naturales es %d", n, sumanat);
    return 0;
}