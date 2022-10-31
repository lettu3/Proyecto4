#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>


int min_par (int a[], int tam)
{
    int i = 0;
    int minimo = INT_MAX;
    while (i < tam)
    {
        if (((a[i]%2)==0) && (a[i] <= minimo))
        {
            minimo = a[i];
        }
        i = i + 1;
    }
    return minimo;
}

int min_impar (int a[], int tam)
{
    int i = 0;
    int minimo = INT_MAX;
    while (i < tam)
    {
        if (((a[i]%2)!=0) && (a[i] <= minimo))
        {
            minimo = a[i];
        }
        i = i + 1;
    }
    return minimo;
    
}

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

int main (void)
{   
    int tam;
    printf ("Introduzca el tamano del arreglo\n");
        scanf ("%i", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    printf("El menor elemento par es %d, y el menor elemento impar es %d", min_par(a, tam), min_impar(a, tam));
    return 0;

}