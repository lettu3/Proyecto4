#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>



void pedirArreglo (int a[], int tam)
{
    int pos, e;
    pos = 0;
    do
    {
        printf ("Ingrese el valor para el lugar %d\n", pos);
        scanf ("%d", &e);
        a[pos] = e;
        pos = pos + 1;
    } 
    while (pos < tam);
    
}

void imprimeArreglo (int a[], int tam)
{
    int pos = 0;
    while (pos < tam)
    {
        printf ("El elemento de la posicion %d es %d, ", pos, a[pos]);
        pos = pos + 1;
    }
}

int main (void)
{   
    int tam;
        printf ("Introduzca el tamano del arreglo\n");
            scanf ("%d", &tam);
    int a[tam];
    pedirArreglo (a, tam);
    imprimeArreglo (a, tam);
    return 0;
}
