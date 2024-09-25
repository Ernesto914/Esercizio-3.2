#include <stdio.h>

int main(void)
{
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    if (numero >= 0)
    {
        printf("Il numero è positivo");
    }
    else
    {
        printf("Il numero è negativo");
    }
    return 0;
}