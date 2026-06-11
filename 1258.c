/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : DD/MM/2026
Objetivo    : Ler uma lista de camisetas contendo nome do aluno, cor e
              tamanho, ordenar os registros conforme os critérios do
              problema e exibir o resultado ordenado.
Aprendizado : Utilização de estruturas (structs), manipulação de strings,
              ordenação com qsort(), criação de funções de comparação,
              acesso a membros de estruturas por meio do operador -> e
              organização de dados compostos.
Pergunta de segunda ordem: Quais são as vantagens de utilizar estruturas
                            para representar entidades do mundo real e
                            como elas contribuem para a organização de
                            programas mais complexos?
-------------------------------------------------------------------------- */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Camiseta
{
    char nome[100];
    char cor[10];
    char tamanho[10];
};

int comp(const void *a, const void *b)
{
    struct Camiseta *cA = (struct Camiseta *)a;
    struct Camiseta *cB = (struct Camiseta *)b;

    if (strcmp(cA->cor, cB->cor) == 0)
    {
        if (strcmp(cA->tamanho, cB->tamanho) == 0)
        {
            return strcmp(cA->nome, cB->nome);
        }

        return -strcmp(cA->tamanho, cB->tamanho);
    }

    return strcmp(cA->cor, cB->cor);
}

int main()
{
    int N;
    int first;
    struct Camiseta camisetas[60];

    first = 1;

    while (scanf("%d\n", &N))
    {
        if (!N)
        {
            break;
        }

        if (first)
        {
            first = 0;
        }
        else
        {
            printf("\n");
        }

        for (int i = 0; i < N; ++i)
        {
            scanf("%[^\n]\n", camisetas[i].nome);
            scanf("%s %s\n",
                  camisetas[i].cor,
                  camisetas[i].tamanho);
        }

        qsort(camisetas,
              N,
              sizeof(struct Camiseta),
              comp);

        for (int i = 0; i < N; ++i)
        {
            printf("%s %s %s\n",
                   camisetas[i].cor,
                   camisetas[i].tamanho,
                   camisetas[i].nome);
        }
    }

    return 0;
}
