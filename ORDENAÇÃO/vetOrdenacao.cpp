#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#define TF 100

void Levetor(int vet[TF], int &TL)
{
    int Numero;
    printf("*** ENTRADA DE VALORES ***\n");
    printf("Elemento [%d]\n", TL);
    printf("Digite um numero: \n");
    scanf("%d", &Numero);
    while (TL < TF && Numero > 0)
    {
        vet[TL] = Numero;
        TL++;
        printf("Digite um numero:[%d]\n", TL);
        scanf("%d", &Numero);
    }
}
void exibir(int vet[TF], int TL)
{
    int i = 0;
    printf("### CONTEUDO DO VETOR   ###\n");
    if (TL == 0)
    {
        printf("VETOR VAZIO!\n");
    }
    else
    {
        for (i = 0; i < TL; i++)
        {
            printf("%d \t", vet[i]);
        }
    }
}

void inserDireta(int vet[TF], int TL)
{
    int aux, p = TL - 1;
    while (p > 0 && vet[p] < vet[p - 1])
    {
        aux = vet[p];
        vet[p] = vet[p - 1];
        vet[p - 1] = aux;
        p--;
    }
    printf("ORDENACAO CONCLUIDA!");
}

int menu()
{
    int num;
    printf("\n*** MENU DE OPCOES ***\n");
    printf("1- Le Vetor\n");
    printf("2- Insercao Direta (Insertion Sort): \n");
    printf("3- Ordenacao por Bolhas (Bubble Sort): \n");
    printf("4- Selecao Direta: \n");
    printf("5- Exibir Vetor: \n");
    scanf("%d", &num);
    return num;
}

int main()
{
    int TL = 0, vet[TF], elem, op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:

            Levetor(vet, TL);
            break;
        case 2:
            inserDireta(vet, TL);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            exibir(vet, TL);
            break;
        }
    } while (op != 27);

    return 0;
}