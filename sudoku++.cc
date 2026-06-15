/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : Projeto Sudoku++ - Verificador
Data        : 14/06/2026
Objetivo    : Verificar uma grade Sudoku contendo símbolos de 1 a 10,
              analisando linhas, colunas e quadrantes.
Aprendizado : Matrizes, conjuntos (set), strings, validação de dados
              e generalização de algoritmos.
-------------------------------------------------------------------------- */

#include <iostream>
#include <set>
#include <string>

using namespace std;

string sudoku[9][9];

bool verificaLinha(int linha)
{
    set<string> numeros;

    for (int coluna = 0; coluna < 9; coluna++)
    {
        numeros.insert(sudoku[linha][coluna]);
    }

    return numeros.size() == 9;
}

bool verificaColuna(int coluna)
{
    set<string> numeros;

    for (int linha = 0; linha < 9; linha++)
    {
        numeros.insert(sudoku[linha][coluna]);
    }

    return numeros.size() == 9;
}

bool verificaQuadrante(int bloco)
{
    set<string> numeros;

    int linhaInicial = 3 * (bloco / 3);
    int colunaInicial = 3 * (bloco % 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            numeros.insert(
                sudoku[linhaInicial + i]
                      [colunaInicial + j]
            );
        }
    }

    return numeros.size() == 9;
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

    if (valido)
    {
        cout << "Sudoku++ valido" << endl;
    }
    else
    {
        cout << "Sudoku++ invalido" << endl;
    }

    return 0;
}
