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

bool existe_positivo (int a[], int tam)
{
    bool resultado = false;
    int pos = 0;
    while (pos < tam)
    {
         resultado = (a[pos] >= 0) || resultado;
        pos = pos + 1;
    }  
    return resultado;
}

bool todos_positivos (int a[], int tam)
{
    bool resultado = true;
    int pos = 0;
    while (pos < tam)
    {
        resultado = (a[pos] >= 0) && resultado;
        pos = pos + 1;
    }
    
    return resultado;
}
int main (void)
{
    int tam;
        printf ("Introduzca el tamano del arreglo\n");
            scanf ("%d", &tam);
    int a[tam];
    pedirArreglo (a, tam);

    int eleccion;
    printf ("Queres saber si al menos un elemento es positivo o todos? Si queres ver uno escribi 1, si queres ver todos escribi 2\n");
        scanf("%d", &eleccion);
    assert ((eleccion == 1)||(eleccion == 2));
    if (eleccion == 1)
    {
        if (existe_positivo (a, tam))
        {
            printf ("Existe al menos un elemento que es positivo");
        }
        else 
        {
            printf ("Todos los elementos son negativos");
        }
    }
    else
    {
        if (todos_positivos(a, tam))
        {
            printf("Todos los elementos del arreglo son positivos");
        }
        else
        {
            printf ("No todos los elementos del arreglo son positivos");
        }
    }
    
    return 0;
}
