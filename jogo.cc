/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : Projeto Sudoku - Jogo Interativo
Data        : 14/06/2026
Objetivo    : Permitir que o usuário jogue Sudoku no console realizando
              inserções de valores e verificando a validade das jogadas.
Aprendizado : Matrizes, funções, validação de dados, interação com o
              usuário e manipulação de tabuleiros bidimensionais.
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int sudoku[9][9] =
{
    {1,3,2,5,7,9,4,6,8},
    {4,0,8,2,6,1,3,7,5},
    {7,5,6,3,8,4,2,1,9},
    {6,4,3,0,5,8,7,9,2},
    {5,2,1,7,9,3,8,4,6},
    {9,8,7,4,2,6,5,3,0},
    {2,1,4,9,3,5,6,8,7},
    {3,6,5,8,1,7,9,2,4},
    {8,7,0,6,4,2,0,5,3}
};

void mostrarTabuleiro()
{
    cout << endl;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(sudoku[i][j] == 0)
                cout << ". ";
            else
                cout << sudoku[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
}

bool verificarJogada(int linha, int coluna, int valor)
{
    for(int i = 0; i < 9; i++)
    {
        if(sudoku[linha][i] == valor)
            return false;
    }

    for(int i = 0; i < 9; i++)
    {
        if(sudoku[i][coluna] == valor)
            return false;
    }

    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;

    for(int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for(int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            if(sudoku[i][j] == valor)
                return false;
        }
    }

    return true;
}

bool completo()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(sudoku[i][j] == 0)
                return false;
        }
    }

    return true;
}

int main()
{
    int opcao;

    do
    {
        mostrarTabuleiro();

        cout << "1 - Inserir valor" << endl;
        cout << "2 - Verificar conclusao" << endl;
        cout << "0 - Sair" << endl;

        cout << "Opcao: ";
        cin >> opcao;

        if(opcao == 1)
        {
            int linha;
            int coluna;
            int valor;

            cout << "Linha (1-9): ";
            cin >> linha;

            cout << "Coluna (1-9): ";
            cin >> coluna;

            cout << "Valor (1-9): ";
            cin >> valor;

            linha--;
            coluna--;

            if(sudoku[linha][coluna] != 0)
            {
                cout << "Posicao ja preenchida." << endl;
                continue;
            }

            if(verificarJogada(linha, coluna, valor))
            {
                sudoku[linha][coluna] = valor;
                cout << "Jogada aceita." << endl;
            }
            else
            {
                cout << "Jogada invalida." << endl;
            }
        }

        if(opcao == 2)
        {
            if(completo())
                cout << "Sudoku completo." << endl;
            else
                cout << "Ainda existem espacos vazios." << endl;
        }

    } while(opcao != 0);

    return 0;
}
