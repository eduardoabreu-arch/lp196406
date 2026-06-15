/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 14/06/2026
Objetivo    : Ler uma matriz contendo posições com e sem pão de queijo e
              gerar uma nova matriz indicando a quantidade de pães de queijo
              existentes nas posições vizinhas (acima, abaixo, esquerda e
              direita), conforme as regras do problema.
Aprendizado : Reforço de manipulação de matrizes, acesso a elementos
              vizinhos, utilização de funções, tratamento de bordas com
              moldura auxiliar e percorrimento de matrizes bidimensionais.
Pergunta de segunda ordem: Quais estratégias podem ser utilizadas para
                            acessar vizinhos de uma célula em uma matriz
                            sem provocar acessos inválidos às bordas?
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int matriz[102][102];

int paesDeQueijoVizinhos(int i, int j)
{
    return matriz[i - 1][j] +
           matriz[i + 1][j] +
           matriz[i][j - 1] +
           matriz[i][j + 1];
}

int main()
{
    int N, M;

    while (cin >> N >> M)
    {
        for (int i = 0; i <= N + 1; ++i)
        {
            for (int j = 0; j <= M + 1; ++j)
            {
                matriz[i][j] = 0;
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= M; ++j)
            {
                cin >> matriz[i][j];
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= M; ++j)
            {
                if (matriz[i][j] == 0)
                {
                    cout << paesDeQueijoVizinhos(i, j);
                }
                else
                {
                    cout << 9;
                }
            }

            cout << endl;
        }
    }

    return 0;
}
