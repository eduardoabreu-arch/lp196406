/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : DD/MM/2026
Objetivo    : Utilizar recursão para gerar a sequência de Collatz
              (ou sequência 3n + 1) e determinar o maior valor alcançado
              durante a execução até que a sequência chegue ao número 1.
Aprendizado : Conceitos de recursão, casos-base, sequências matemáticas,
              estruturas condicionais, operador ternário e acompanhamento
              de valores máximos durante chamadas recursivas.
Pergunta de segunda ordem: Por que a Conjectura de Collatz é considerada
                            um problema matemático importante e por que,
                            apesar de parecer simples, ainda não possui
                            uma demonstração geral?
-------------------------------------------------------------------------- */

#include <stdio.h>

int maiorCollatz(int n, int maior)
{
    if (n > maior)
    {
        maior = n;
    }

    if (n == 1)
    {
        return maior;
    }

    if (n % 2)
    {
        return maiorCollatz(3 * n + 1, maior);
    }

    return maiorCollatz(n / 2, maior);
}

int main()
{
    int n;

    while (scanf("%d", &n))
    {
        if (!n)
        {
            break;
        }

        printf("%d\n", maiorCollatz(n, n));
    }

    return 0;
}
