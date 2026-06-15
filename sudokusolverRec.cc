/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : Projeto Sudoku - Resolvedor Recursivo
Data        : 14/06/2026
Objetivo    : Resolver automaticamente um Sudoku utilizando recursão e
              backtracking.
Aprendizado : Recursão, backtracking, matrizes, busca em profundidade e
              validação de restrições.
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int sudoku[9][9];

bool encontrarVazio(int &linha, int &coluna)
{
    for (linha = 0; linha < 9; linha++)
    {
        for (coluna = 0; coluna < 9; coluna++)
        {
            if (sudoku[linha][coluna] == 0)
            {
                return true;
            }
        }
    }

    return false;
}

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

bool resolver()
{
    int linha;
    int coluna;

    if (!encontrarVazio(linha, coluna))
    {
        return true;
    }

    for (int valor = 1; valor <= 9; valor++)
    {
        if (valorValido(linha, coluna, valor))
        {
            sudoku[linha][coluna] = valor;

            if (resolver())
            {
                return true;
            }

            sudoku[linha][coluna] = 0;
        }
    }

    return false;
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

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku[i][j];
        }
    }

    if (resolver())
    {
        cout << "Sudoku resolvido:" << endl;
        imprimirSudoku();
    }
    else
    {
        cout << "Nao existe solucao." << endl;
    }

    return 0;
}
