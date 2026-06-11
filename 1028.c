/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : Utilizar recursão para calcular o Máximo Divisor Comum (MDC)
              entre dois números inteiros por meio do Algoritmo de Euclides.
Aprendizado : Conceitos de recursão, casos-base, operador ternário,
              Algoritmo de Euclides, operações com resto da divisão e
              resolução eficiente de problemas envolvendo divisibilidade.
Pergunta de segunda ordem: Por que o Algoritmo de Euclides é considerado
                            uma das formas mais eficientes de calcular o
                            MDC e como sua eficiência se compara à busca
                            direta por divisores comuns?
-------------------------------------------------------------------------- */

#include <stdio.h>

int MDC(int a, int b)
{
    return (b == 0) ? a : MDC(b, a % b);
}

int main()
{
    int N, F1, F2;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &F1, &F2);

        printf("%d\n", MDC(F1, F2));
    }

    return 0;
}
