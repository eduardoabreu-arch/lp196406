/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : DD/MM/2026
Objetivo    : Ler 15 valores inteiros, armazenar os números pares e ímpares
              em vetores distintos de tamanho 5 e imprimir os conteúdos
              sempre que um dos vetores for preenchido, seguindo o formato
              especificado pelo problema.
Aprendizado : Manipulação de vetores, utilização de funções, passagem de
              vetores como parâmetros, estruturas condicionais, laços de
              repetição, controle de índices e separação de dados em grupos
              de acordo com critérios específicos.
Pergunta de segunda ordem: Como seria possível generalizar este programa
                            para trabalhar com qualquer quantidade de
                            números e tamanhos de vetores sem alterar a
                            lógica principal do algoritmo?
-------------------------------------------------------------------------- */

#include <stdlib.h>
#include <stdio.h>

void imprime(char *nome, int *vetor, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%s[%d] = %d\n", nome, i, vetor[i]);
    }
}

int main()
{
    int valor;
    int par[5];
    int impar[5];
    int n_par;
    int n_impar;

    n_par = 0;
    n_impar = 0;

    for (int i = 0; i < 15; ++i)
    {
        scanf("%d", &valor);

        if (abs(valor) % 2)
        {
            impar[n_impar++] = valor;

            if (n_impar == 5)
            {
                imprime("impar", impar, n_impar);
                n_impar = 0;
            }
        }
        else
        {
            par[n_par++] = valor;

            if (n_par == 5)
            {
                imprime("par", par, n_par);
                n_par = 0;
            }
        }
    }

    imprime("impar", impar, n_impar);
    imprime("par", par, n_par);

    return 0;
}
