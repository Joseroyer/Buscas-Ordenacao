#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#define TF 100

void LeVetor(int vet[TF], int &TL)
{
    int Numero;
    printf("*** ENTRADA DE VALORES ***\n");
    printf("Digite um numero: \n");
    scanf("%d", &Numero);
    while (TL < TF && Numero > 0)
    {
        vet[TL] = Numero;
        TL++;
        printf("Digite um numero: \n");
        scanf("%d", &Numero);
    }
}

int main()
{

    return 0;
}