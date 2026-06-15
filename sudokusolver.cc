/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : Projeto Sudoku - Resolvedor Iterativo
Data        : 14/06/2026
Objetivo    : Resolver um Sudoku utilizando uma abordagem iterativa sem
              recursão.
Aprendizado : Matrizes, laços de repetição, busca de candidatos válidos
              e resolução iterativa de problemas.
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int sudoku[9][9];

bool valorValido(int linha, int coluna, int valor)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[linha][i] == valor)
        {
            return false;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if (sudoku[i][coluna] == valor)
        {
            return false;
        }
    }

    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;

    for (int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for (int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            if (sudoku[i][j] == valor)
            {
                return false;
            }
        }
    }

    return true;
}

void imprimirSudoku()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << " ";
        }

        cout << endl;
    }
}

bool completo()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku[i][j] == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku[i][j];
        }
    }

    bool houveMudanca;

    do
    {
        houveMudanca = false;

        for (int linha = 0; linha < 9; linha++)
        {
            for (int coluna = 0; coluna < 9; coluna++)
            {
                if (sudoku[linha][coluna] != 0)
                {
                    continue;
                }

                int candidato = 0;
                int quantidade = 0;

                for (int valor = 1; valor <= 9; valor++)
                {
                    if (valorValido(linha, coluna, valor))
                    {
                        candidato = valor;
                        quantidade++;
                    }
                }

                if (quantidade == 1)
                {
                    sudoku[linha][coluna] = candidato;
                    houveMudanca = true;
                }
            }
        }

    } while (houveMudanca);

    if (completo())
    {
        cout << "Sudoku resolvido:" << endl;
        imprimirSudoku();
    }
    else
    {
        cout << "Nao foi possivel resolver apenas com metodo iterativo."
             << endl;
    }

    return 0;
}
