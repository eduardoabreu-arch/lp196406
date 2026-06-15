/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Utilizar recursão para resolver o Problema de Josephus,
              determinando a posição do sobrevivente após sucessivas
              eliminações em um círculo de pessoas.
Aprendizado : Aplicação de recursão, definição de casos-base,
              aritmética modular, resolução do Problema de Josephus e
              compreensão de como uma solução recursiva pode ser construída
              a partir de subproblemas menores.
Pergunta de segunda ordem: Como a fórmula recursiva do Problema de
                            Josephus é construída e por que a operação
                            de módulo (%) é necessária para manter as
                            posições dentro do círculo?
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int sobrevivente(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return (sobrevivente(n - 1, k) + k) % n;
}

int main()
{
    int NC;

    cin >> NC;

    for (int i = 1; i <= NC; ++i)
    {
        int n, k;

        cin >> n >> k;

        cout << "Case "
             << i
             << ": "
             << sobrevivente(n, k) + 1
             << endl;
    }

    return 0;
}
