/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : DD/MM/2026
Objetivo    : Ler diversos valores numéricos representados como texto e
              calcular a quantidade total de LEDs necessários para exibi-los
              em um painel digital de sete segmentos.
Aprendizado : Utilização de strings, estruturas de repetição, comando
              switch, manipulação de caracteres, processamento de vetores
              de caracteres e resolução de problemas envolvendo tabelas de
              correspondência entre símbolos e valores.
Pergunta de segunda ordem: Em quais situações o comando switch é mais
                            adequado do que uma sequência de if/else e
                            quais são as vantagens em termos de clareza e
                            manutenção do código?
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main()
{
    char V[101];
    int N;
    int resposta;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", V);

        resposta = 0;

        for (int j = 0; j < strlen(V); j++)
        {
            switch (V[j])
            {
                case '0':
                    resposta += 6;
                    break;

                case '1':
                    resposta += 2;
                    break;

                case '2':
                    resposta += 5;
                    break;

                case '3':
                    resposta += 5;
                    break;

                case '4':
                    resposta += 4;
                    break;

                case '5':
                    resposta += 5;
                    break;

                case '6':
                    resposta += 6;
                    break;

                case '7':
                    resposta += 3;
                    break;

                case '8':
                    resposta += 7;
                    break;

                case '9':
                    resposta += 6;
                    break;
            }
        }

        printf("%d leds\n", resposta);
    }

    return 0;
}
