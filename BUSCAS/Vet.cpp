#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#define TF 6

//& por referencia, atualiza o valor
// por valor, faz a copia
void LeVetor(int vet[TF], int &TL)
{
    int Numero;
    printf("*** ENTRADA DE VALORES ***\n");
    printf("Digite um numero:[%d]\n", TL);
    scanf("%d", &Numero);
    while (TL < TF && Numero > 0)
    {
        vet[TL] = Numero;
        TL++;
        printf("Digite um numero:[%d]\n", TL);
        scanf("%d", &Numero);
    }
}
void Exibir(int vet[], int TL)
{
    int i;
    printf("\nConteudo do Vetor:\n");
    if (TL == 0)
        printf("\nVetor Vazio!\n");
    else
        for (i = 0; i < TL; i++)
            printf("\nVetor[%d]: %d", i, vet[i]);

    getch();
}

int buscaExaustiva(int vet[], int TL, int elem)
{
    int i = 0;
    while (i < TL && vet[i] != elem)
    {
        i++;
    }
    if (i < TL) // achou
    {
        return i;
    }
    else
        return -1;
}

int menu()
{
    int num;
    printf("\n*** MENU DE OPCOES ***\n");
    printf("1- Le Vetor\n");
    printf("2- Busca Exaustiva:\n");
    printf("3- Busca Exaustiva com Sentinela:\n");
    printf("4- Busca Sequencial indexada: \n");
    printf("5- Busca Binaria: \n");
    printf("6- Exibir Vetor: \n");
    scanf("%d", &num);
    return num;
}

int main()
{
    int num, vet[TF], TL = 0, op;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            LeVetor(vet, TL);
            break;
        case 2:
            printf("Digite o valor que deseja buscar?\n");
            scanf("%d", &num);
            if (buscaExaustiva(vet, TL, num) == -1)
            {
                printf("\nElemento nao encontrado!\n");
            }
            else
                printf("\nElemento %d encontrado\n", num);
            getch();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            Exibir(vet, TL);
            break;
        }

    } while (op != 27);
    return 0;
}
