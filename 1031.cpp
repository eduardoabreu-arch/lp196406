/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : DD/MM/2026
Objetivo    : Utilizar recursão e memoização para resolver uma variação do
              Problema de Josephus, determinando o menor valor de M que faz
              com que a região 13 seja a última eliminada.
Aprendizado : Aplicação de recursão, memoização, programação dinâmica,
              aritmética modular, vetores bidimensionais para armazenar
              resultados já calculados e otimização de algoritmos
              recursivos.
Pergunta de segunda ordem: Como a memoização reduz a quantidade de cálculos
                            repetidos em funções recursivas e qual é a
                            diferença entre memoização e programação
                            dinâmica iterativa?
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int T[101][1001];

int sobrevivente(int n, int k)
{
    if (T[n][k] == -1)
    {
        T[n][k] = (sobrevivente(n - 1, k) + k) % n;
    }

    return T[n][k];
}

int main()
{
    int N;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 1001; ++j)
        {
            T[i][j] = 0;
        }
    }

    for (int i = 2; i < 101; ++i)
    {
        for (int j = 0; j < 1001; ++j)
        {
            T[i][j] = -1;
        }
    }

    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }

        int m = 1;

        while ((sobrevivente(N - 1, m) + 1) % N != 12)
        {
            ++m;
        }

        cout << m << endl;
    }

    return 0;
}
