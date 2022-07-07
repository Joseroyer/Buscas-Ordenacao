#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#define TF 100

//& por referencia, atualiza o valor
// por valor, faz a copia
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

void menu()
{
    printf("MENU DE OPCÕES\n");
    printf("1- LE VETOR:\n");
    printf("2- Busca Exaustiva:\n");
    printf("3- Busca Exaustiva com Sentinela:\n");

    getch();
}

int main()
{
    int num, vet[TF], TL;

    return 0;
}