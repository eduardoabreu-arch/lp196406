/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 14/06/2026
Objetivo    : Construir e exibir uma matriz quadrada cujos valores formam
              camadas concêntricas, onde cada camada possui um valor
              inteiro crescente em direção ao centro da matriz.
Aprendizado : Manipulação de matrizes, laços de repetição aninhados,
              cálculo de distâncias em relação às bordas da matriz,
              formatação de saída e utilização de funções matemáticas para
              determinar regiões específicas de uma matriz.
Pergunta de segunda ordem: Como identificar matematicamente as diferentes
                            regiões de uma matriz e utilizar essa lógica
                            para gerar outros padrões geométricos?
-------------------------------------------------------------------------- */

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }

        for (int i = 0; i < N; ++i)
        {
            cout << setw(3)
                 << min(min(i, N - 1 - i),
                        min(0, N - 1)) + 1;

            for (int j = 1; j < N; ++j)
            {
                cout << setw(4)
                     << min(min(i, N - 1 - i),
                            min(j, N - 1 - j)) + 1;
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
