/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 09/04/2026
Objetivo    : Ler 3 inteiros A, B, C e exibi-los com 4 formatos diferentes de printf.
Aprendizado : %d: formato normal (sem preenchimento); %10d: largura mínima 10, alinhado à direita com espaços; Múltiplas leituras scanf individuais
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    printf("A = %d, B = %d, C = %d\n", A, B, C);

    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);

    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);

    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);

    return 0;
}
