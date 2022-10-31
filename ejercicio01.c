#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void holaHasta (int n)
{
    assert (n > 0);
    
    while (n > 0)
    {
        printf ("Hola ");
        n = n - 1;
    }
    
}

int pedirEntero (void)
{
    int x;
    printf ("Y el valor pibe?\n");
        scanf ("%i", &x);
    return x;
}

int main (void)
{
    int n;
    n = pedirEntero ();
    holaHasta (n);
    return 0;

}