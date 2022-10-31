#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

bool es_primo (int n)
{
    int i;
    bool res;

    i = 2;
    res = true;

    while (i < n && res)
    {
        res = res && !(n % i == 0);
        i = i + 1;
    }

    return res;
}

int n_esimop (int N)
{
    int indice = 2;
    int n_esimo = 0;
    while (n_esimo < N)
    {
        if (es_primo(indice))
        {
            n_esimo = n_esimo + 1;
            if (n_esimo == N)
            {
                return indice;
            }
            else 
            {
                indice = indice + 1;
            }
        }
        else 
        {
            indice = indice + 1;
        }

    }
}

int main (void)
{
    int N;
    printf("Que primo quiere saber?\n");
        scanf("%d", &N);

    int primo = n_esimop (N);

    printf ("El %d-esimo primo es %d", N, primo);

}
