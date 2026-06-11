/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/005/2026
Objetivo    : Calcular a quantidade de trigo presente em um tabuleiro de
              xadrez onde cada casa possui o dobro da quantidade de grãos
              da casa anterior e determinar o peso total em quilogramas.
Aprendizado : Manipulação de números inteiros muito grandes utilizando
              unsigned long long, crescimento exponencial, potências de 2,
              estruturas de repetição, conversão de unidades e análise dos
              limites dos tipos numéricos da linguagem C.
Pergunta de segunda ordem: Por que o crescimento exponencial gera valores
                            extremamente grandes em poucas iterações e como
                            escolher um tipo de dado adequado para evitar
                            estouro de capacidade (overflow)?
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long int potencia(int base, int expoente)
{
    if (expoente == 1)
        return base;
    if (expoente % 2)
        return base * potencia(base, expoente - 1);

    unsigned long long int p = potencia(base, expoente / 2);
    return p * p;
}

unsigned long long int somaPG(int a0, int q, int n)
{
    return a0 * (potencia(q, n) - 1) / (q - 1);
}

int main()
{
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &X);

        printf("%llu kg\n", somaPG(1, 2, X) / 12000);
    }

    return 0;
}
