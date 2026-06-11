/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : DD/MM/2026
Objetivo    : Ler as coordenadas de dois pontos no plano cartesiano e
              calcular a distância entre eles utilizando a fórmula da
              distância euclidiana.
Aprendizado : Aplicação da fórmula da distância entre dois pontos,
              utilização da biblioteca math.h, uso da função sqrt() para
              calcular raiz quadrada e manipulação de variáveis do tipo
              double para cálculos com números reais.
Pergunta de segunda ordem: Como a fórmula da distância entre dois pontos
                            está relacionada ao Teorema de Pitágoras e
                            como ela pode ser generalizada para três ou
                            mais dimensões?
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) +
                     (y2 - y1) * (y2 - y1));

    printf("%.4lf\n", distancia);

    return 0;
}
