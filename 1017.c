/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : Ler o tempo gasto em uma viagem e a velocidade média do
              veículo, calcular a quantidade de combustível necessária
              sabendo que o automóvel faz 12 km por litro.
Aprendizado : Criação e utilização de funções, passagem de parâmetros,
              cálculo de distância a partir da velocidade e do tempo,
              manipulação de números reais e decomposição de problemas em
              módulos reutilizáveis.
Pergunta de segunda ordem: Quais são as vantagens de dividir um programa
                            em funções e como isso contribui para a
                            reutilização, manutenção e organização do código?
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade)
{
    int distancia;

    distancia = velocidade * tempo;

    return distancia / 12.0f;
}

int main()
{
    int tempo, velocidade;
    float litros;

    scanf("%d %d", &tempo, &velocidade);

    litros = calcularLitros(tempo, velocidade);

    printf("%.3f\n", litros);

    return 0;
}
