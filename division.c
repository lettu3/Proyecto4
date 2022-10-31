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

struct div_t
{
    int cociente;
    int resto;
} ;

struct div_t division (int x, int y)
{
    struct div_t res;
    if (y == 0)
    {
        printf("Error - No se puede dividir por 0");
        assert ( y != 0);
    }
    else
    {
    res.cociente = x / y ;
    res.resto = x % y;
    }
    return res;
    
}

int main (void)
{
    int x, y;
    x = pedirEntero();
    y = pedirEntero();

    struct div_t division_entera;
    division_entera = division (x, y);

    printf ("El resultado de la division de x = %d , por y = %d, tiene cociente = %d y resto = %d", x, y, division_entera.cociente, division_entera.resto);
    return 0;

}


