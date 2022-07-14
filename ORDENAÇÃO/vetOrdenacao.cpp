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
            printf("%d", vet[i]);
        }
    }
}

int menu()
{
    int num;
    printf("\n*** MENU DE OPCOES ***\n");
    printf("1- Le Vetor\n");
    printf("2- Insercao Direta (Insertion Sort): \n");
    printf("3- Ordenacao por Bolhas (Bubble Sort): \n");
    printf("4- Selecao Direta: \n");
    printf("5- Busca Binaria: \n");
    printf("6- Exibir Vetor: \n");
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
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        }
    } while (op != 27);

    return 0;
}