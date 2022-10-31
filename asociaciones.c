#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>

typedef char clave_t;
typedef int valor_t;

struct asoc 
{
    clave_t clave;
    valor_t valor;
};

void pedirArreglo(struct asoc a[], int tam){
    int i=0;
    char c;
    while (i < tam)
    {
        printf("Introduzca la clave en el lugar %d del arrreglo \n",i);
        scanf(" %c",&c);
        a[i].clave=c;
        i=i+1;
    }
}
bool asoc_existe(struct asoc a[], int tam, clave_t c){
    int i=0;
    bool resultado = false; 
    while (i<tam)
    {
        if(c==a[i].clave)
        {
            resultado=true;
        }
    i = i + 1;
    }
    return resultado;
}

int main (void){
    int tam;
    printf("Introduzca el tamano del arreglo\n");
        scanf("%d",&tam);
    clave_t c;
    struct asoc a[tam];


    pedirArreglo (a,tam);
    printf("Introduzca la clave a comprobar\n");
    scanf(" %c",&c);
    if (asoc_existe(a, tam, c))
    {
        printf ("La clave existe");
    }
    else
    {
        printf ("La clave no existe");
    }
    return 0;
}