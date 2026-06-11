/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 26/05/2026
Objetivo    : Utilizar recursão para calcular valores da sequência de
              Fibonacci e determinar quantas chamadas recursivas são
              realizadas durante o processo.
Aprendizado : Conceitos de recursão, casos-base, construção da sequência
              de Fibonacci, memorização de resultados (memoização),
              utilização de vetores para armazenar resultados já
              calculados e análise do custo computacional de chamadas
              recursivas.
Pergunta de segunda ordem: Como a técnica de memoização reduz a quantidade
                            de chamadas recursivas em algoritmos como o de
                            Fibonacci e qual é o impacto dessa otimização
                            na complexidade do programa?
-------------------------------------------------------------------------- */

#include <stdio.h>

int F[40], CF[40];

void calcula(int n)
{
    if (F[n] == -1)
    {
        calcula(n - 1);
        calcula(n - 2);

        F[n] = F[n - 1] + F[n - 2];
        CF[n] = CF[n - 1] + CF[n - 2] + 1;
    }
}

int main()
{
    int N, X;

    F[0] = 0;
    F[1] = 1;

    CF[0] = 1;
    CF[1] = 1;

    for (int i = 2; i < 40; ++i)
    {
        F[i] = -1;
        CF[i] = -1;
    }

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &X);

        calcula(X);

        printf("fib(%d) = %d calls = %d\n",
               X,
               CF[X] - 1,
               F[X]);
    }

    return 0;
}
