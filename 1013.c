/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1014
Data        : 07/04/2026
Objetivo    : Ler 3 valores inteiros e determinar qual é o maior entre eles.
Aprendizado : Uso da função abs() da stdlib.h para valor absoluto; Leitura de 3 inteiros com scanf e saída formatada com printf
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, maiorAB, maior;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorAB = (a + b + abs (a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;
    
    printf("%d eh o maior\n", maior);

    return 0;
}
