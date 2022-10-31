#include <stdio.h> 
#include <stdbool.h> 
#include <assert.h> 
#include <limits.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio(persona_t arr[], unsigned int longitud)
{   
    unsigned int indice = 0;
    float resultado = 0;
    while (indice < longitud)
    {
        resultado = resultado + arr[indice].peso;
        indice = indice + 1;
    }
    resultado = resultado / longitud;
    return resultado;
}

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud)
{
    unsigned int indice = 0;
    int posicion;
    int mayor_edad = 0;
    while (indice < longitud)
    {
        if (arr[indice].edad >= mayor_edad)
        {
            mayor_edad = arr[indice].edad;
            posicion = indice;
        }
        indice = indice + 1;
    }
    return arr[posicion];
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud)
{
    unsigned int indice = 0;
    int posicion;
    float menor_altura = INT_MAX;
    while (indice < longitud)
    {
        if (arr[indice].altura <= menor_altura)
        {
            menor_altura = arr[indice].altura;
            posicion = indice;
        }

        indice = indice + 1;
    }
    return arr[posicion];
}
int main(void) {
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};

    printf("El peso promedio es %f\n", peso_promedio(arr, longitud));

    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);

    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}
