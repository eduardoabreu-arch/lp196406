/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : DD/MM/2026
Objetivo    : Ler a hora inicial e a hora final de um jogo e calcular a
              duração da partida, considerando que o jogo pode atravessar
              a meia-noite e que sua duração mínima é de 1 hora e máxima
              de 24 horas.
Aprendizado : Criação e utilização de funções, passagem de parâmetros,
              estruturas condicionais e resolução de problemas envolvendo
              ciclos de tempo em intervalos de 24 horas.
Pergunta de segunda ordem: Como adaptar a lógica de cálculo de duração para
                            considerar também minutos e segundos, mantendo
                            o tratamento correto da passagem pela meia-noite?
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim)
{
    int duracao;

    duracao = 24 - inicio + fim;

    if (duracao > 24)
    {
        duracao = duracao - 24;
    }

    return duracao;
}

int main()
{
    int HI, HF, TEMPO;

    scanf("%d %d", &HI, &HF);

    TEMPO = calcularDuracao(HI, HF);

    printf("O JOGO DUROU %d HORA(S)\n", TEMPO);

    return 0;
}
