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
    int x;
    x = pedirEntero ();

    int abs;
    if (x >= 0)
    {
        abs = x;
    }
    else 
    {
        abs = (-1) * x;
    }
    
    assert (abs >= 0);
// {|x| >= 0}
    printf ("El valor absoluto es %d", abs);
    return 0;
}
