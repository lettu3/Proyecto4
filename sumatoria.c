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

int sumatoria (int a[], int tam)
{
    int sum, pos;
    sum = 0;
    pos = 0;
    while (pos < tam)
    {
        sum = a[pos] + sum;
        pos = pos + 1;
    }
    
    return sum;
}

int main (void)
{   
    int tam;
        printf ("Introduzca el tamano del arreglo\n");
            scanf ("%d", &tam);

    int a[tam];
    pedirArreglo (a, tam);
    
    int sum_a;
    sum_a = sumatoria (a, tam);

    printf ("La sumatoria de todos los elementos del arreglo es %d\n", sum_a);

    return 0;
}