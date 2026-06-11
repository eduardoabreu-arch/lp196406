/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : DD/MM/2026
Objetivo    : Ler um valor N e construir uma matriz quadrada N×N,
              preenchendo a diagonal principal com 1, a diagonal secundária
              com 2 e os demais elementos com 3.
Aprendizado : Utilização de matrizes bidimensionais, laços de repetição
              aninhados, manipulação de diagonais de uma matriz e leitura
              de múltiplos casos de teste até o fim do arquivo (EOF).
Pergunta de segunda ordem: Como identificar e manipular outras regiões de
                            uma matriz (acima da diagonal principal, abaixo
                            da diagonal secundária, bordas, centro etc.)
                            utilizando apenas índices?
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int z;

    while(scanf("%d", &z) != EOF)
    {
        int ara[z][z];
        int a, b, d;

        for(a = 0; a < z; a++)
        {
            for(b = 0; b < z; b++)
                ara[a][b] = 3;
        }

        for(a = 0; a < z; a++)
            ara[a][a] = 1;

        d = z - 1;

        for(a = 0, b = d; a < z; a++, b--)
            ara[a][b] = 2;

        for(a = 0; a < z; a++)
        {
            for(b = 0; b < z; b++)
                printf("%d", ara[a][b]);

            printf("\n");
        }
    }

    return 0;
}
