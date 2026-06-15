/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 14/06/2026
Objetivo    : Ler uma sequência de números inteiros, identificar o menor
              valor presente no vetor e informar a posição em que ele foi
              encontrado.
Aprendizado : Reforço sobre busca em vetores, comparação de elementos,
              utilização de índices, rastreamento de posições e
              processamento sequencial de dados.
Pergunta de segunda ordem: Como encontrar simultaneamente o menor e o
                            maior elemento de um vetor realizando o menor
                            número possível de comparações?
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int numero;
    int menor;
    int posicao;

    cin >> N;

    cin >> menor;
    posicao = 0;

    for (int i = 1; i < N; ++i)
    {
        cin >> numero;

        if (numero < menor)
        {
            menor = numero;
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
