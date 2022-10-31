#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

struct datos_t 
{
    float maximo;
    float minimo;
    float promedio;
};

void pedirArreglo (float a[], int tam)
{
    int pos;
    float e;
    pos = 0;
    do
    {
        printf ("Ingrese el valor para el lugar %d\n", pos);
        scanf ("%f", &e);
        a[pos] = e;
        pos = pos + 1;
    } 
    while (pos < tam);
}

float minimo (float x, float y)
{
    float res;
    if (x >= y)
    {
        res = y;
    }
    else
    {
        res = x;
    }
    return res;
}

float maximo (float x, float y)
{
    float res;
    if (x >= y)
    {
        res = x;
    }
    else
    {
        res = y;
    }
    return res;
}

struct datos_t stats (float a[], int tam)
{
    struct datos_t resultado;
    resultado.maximo = INT_MIN;
    resultado.minimo = INT_MAX;
    resultado.promedio = 0;
    int i = 0;
    while (i < tam)
    {
        resultado.promedio = resultado.promedio + a[i];
        resultado.maximo = maximo (resultado.maximo, a[i]);
        resultado.minimo = minimo (resultado.minimo, a[i]);
        i = i + 1;
    }
    resultado.promedio = resultado.promedio / tam;
    return resultado;
}

int main (void)
{
    int tam;
    printf ("Introduzca el tamano del arreglo\n");
        scanf ("%d", &tam);
    float a[tam];
    pedirArreglo (a, tam);
    
    struct datos_t estadisticas =  stats(a, tam);
   
    printf("El elemento maximo del arreglo es %f, el minimo %f, y el promedio de sus elementos es %f", estadisticas.maximo, estadisticas.minimo, estadisticas.promedio);
    return 0;
}