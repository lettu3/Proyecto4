#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct comp_t
{
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos (int a[], int tam, int elem)
{
    struct comp_t res;
    res.menores = 0;
    res.iguales = 0;
    res.mayores = 0;
    int i = 0;
    while (i < tam)
    {   
        if (a[i] == elem)
        {
            res.iguales = res.iguales + 1;
        }
        if (a[i] < elem)
        {
            res.menores = res.menores + 1;
        }
        if (a[i] > elem)
        {
            res.mayores = res.mayores + 1;
        }
        i = i + 1;
    }
    
    return res;
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
        scanf("%i", &tam);
    
    int a[tam];
    pedirArreglo (a, tam);
    
    int comp;
    printf ("Con que numero quiere comparar los elementos del arreglo?\n");
        scanf ("%i", &comp);

    struct comp_t datos;
    datos = cuantos (a, tam, comp);

    printf("El arreglo tiene %d elementos menores que %d, %d iguales y %d mayores", datos.menores, comp, datos.iguales, datos.mayores);

    
}