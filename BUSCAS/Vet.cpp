#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#define TF 100

//& por referencia, atualiza o valor;
// por valor, faz a copia;
void LeVetor(int vet[TF], int &TL)
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
void Exibir(int vet[], int TL)
{
    int i;
    printf("\nConteudo do Vetor:\n");
    if (TL == 0)
        printf("\nVetor Vazio!\n");
    else
    {
        for (i = 0; i < TL; i++)
            printf("\nVetor[%d]: %d", i, vet[i]);
    }
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
int buscaExaustivaSentinela(int vet[], int TL, int elem)
{
    int i = 0;
    vet[TL] = elem;
    while (elem != vet[i])
    {
        i++;
    }
    if (i < TL)
        return i;
    else
        return -1;
}
int buscaSequencialIndexada(int vet[], int TL, int elem)
{
    int i = 0;
    while (i < TL && elem > vet[i])
    {
        i++;
    }
    if (i < TL && elem == vet[i]) // achou
    {
        return i;
    }
    else
        return -1;
}
int buscaBinaria(int vet[], int TL, int elem)
{
    int inicio = 0, fim = TL - 1, meio;
    meio = fim / 2;
    while (inicio < fim && elem != vet[meio])
    {
        if (vet[meio] < elem)
            inicio = meio + 1;
        else
        {
            fim = meio;
            meio = (inicio + fim) / 2;
        }
    }
    if (elem == vet[meio])
    {
        return meio;
    }
    else
        return -1;
}

int verificaOrdenacao(int vet[], int TL)
{
    int i, flag = 0;
    for (i = 0; i < TL; i++)
    {
        if (vet[i] < vet[i + 1])
        {
            flag = 1;
        }
    }
    return flag;
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
            printf("\n### BUSCA EXAUSTIVA ###\n");
            printf("Digite o valor que deseja buscar?\n");
            scanf("%d", &num);
            if (buscaExaustiva(vet, TL, num) == -1)
                printf("\nElemento nao encontrado!\n");
            else
                printf("\nElemento %d encontrado\n", num);
            getch();
            break;
        case 3:
            printf("\n### BUSCA EXAUSTIVA COM SENTINELA ###\n");
            if (verificaOrdenacao(vet, TL) == 1)
            {
                printf("Digite o valor que deseja buscar?\n");
                scanf("%d", &num);
                if (buscaExaustivaSentinela(vet, TL, num) == -1)
                    printf("Elemento não encontrado!\n");
                else
                    printf("Elemento encontrado %d\n", num);
            }
            else
                printf("Nao esta Ordenado\n");

            break;
            getch();
        case 4:
            printf("\n### BUSCA SEQUENCIAL INDEXADA ###\n");
            if (verificaOrdenacao(vet, TL) == 1)
            {
                printf("Digite o valor que deseja buscar?\n");
                scanf("%d", &num);
                if (buscaSequencialIndexada(vet, TL, num) == -1)
                    printf("Elemento não encontrado!\n");
                else
                    printf("Elemento encontrado %d\n", num);
            }
            else
                printf("Nao esta Ordenado\n");
            break;
            getch();
        case 5:
            printf("\n### BUSCA BINARIA ###\n");
            printf("Digite o valor que deseja buscar?\n");
            scanf("%d", &num);
            if (buscaBinaria(vet, TL, num) == -1)
                printf("Elemento não encontrado!\n");
            else
                printf("Elemento encontrado %d\n", num);
            break;
            getch();
        case 6:
            Exibir(vet, TL);
            break;
        }
    } while (op != 27);
    return 0;
}
