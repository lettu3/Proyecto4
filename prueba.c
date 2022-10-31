#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

bool es_primo (int n)\
{
    int i;
    bool res;

    i = 2;
    res = true;

    while (i < n && res)
    {
        res = res && !(n % i == 0);
        i = i + 1;
    }

    return res;
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
    int x;
    x = pedirEntero();
    printf ("%d es primo? 1 si lo es, 0 si no. ... %d", x, es_primo(x));
    return 0;
}