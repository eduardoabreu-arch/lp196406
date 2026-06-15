/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 14/06/2026
Objetivo    : Ler 20 valores inteiros, inverter a ordem dos elementos do
              vetor e exibir o resultado conforme o formato especificado
              pelo problema.
Aprendizado : Manipulação de vetores, troca de elementos, utilização de
              variável auxiliar, percorrimento de vetores e aplicação do
              algoritmo de inversão de sequência.
Pergunta de segunda ordem: Como inverter um vetor de qualquer tamanho com
                            o menor número possível de trocas e qual é a
                            complexidade desse algoritmo?
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main()
{
    int N[20];

    for (int i = 0; i < 20; ++i)
    {
        cin >> N[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; ++i)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
