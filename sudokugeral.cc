/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : Projeto Sudoku Geral - Verificador
Data        : 14/06/2026
Objetivo    : Verificar uma grade Sudoku contendo quaisquer símbolos,
              analisando linhas, colunas e quadrantes 3x3.
Aprendizado : Matrizes, strings, conjuntos (set), validação de dados
              e generalização de algoritmos.
-------------------------------------------------------------------------- */

#include <iostream>
#include <set>
#include <string>

using namespace std;

string sudoku[9][9];

bool verificaLinha(int linha)
{
    set<string> simbolos;

    for (int coluna = 0; coluna < 9; coluna++)
    {
        simbolos.insert(sudoku[linha][coluna]);
    }

    return simbolos.size() == 9;
}

bool verificaColuna(int coluna)
{
    set<string> simbolos;

    for (int linha = 0; linha < 9; linha++)
    {
        simbolos.insert(sudoku[linha][coluna]);
    }

    return simbolos.size() == 9;
}

bool verificaQuadrante(int bloco)
{
    set<string> simbolos;

    int linhaInicial = 3 * (bloco / 3);
    int colunaInicial = 3 * (bloco % 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            simbolos.insert(
                sudoku[linhaInicial + i]
                      [colunaInicial + j]
            );
        }
    }

    return simbolos.size() == 9;
}

void imprimirGrade()
{
    cout << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;
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

    bool valido = true;

    for (int i = 0; i < 9; i++)
    {
        if (!verificaLinha(i) ||
            !verificaColuna(i) ||
            !verificaQuadrante(i))
        {
            valido = false;
            break;
        }
    }

    cout << "Grade lida:" << endl;

    imprimirGrade();

    if (valido)
    {
        cout << "Sudoku Geral valido" << endl;
    }
    else
    {
        cout << "Sudoku Geral invalido" << endl;
    }

    return 0;
}
