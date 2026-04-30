/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 09/04/2026
Objetivo    : Ler 2 float (A,B) e 2 double (C,D), exibir com 8 formatos de precisão diferentes.
Aprendizado : printf float: %.nf (n casas decimais), %.nE (notação científica); printf double: mesmo formato que float (double usa %f internamente); %.0f arredonda para inteiro sem decimais
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    float A, B;
    double C, D;

    scanf("%f %f", &A, &B);    
    scanf("%lf %lf", &C, &D);  

    printf("A = %.1f, B = %.2f\n", A, B);
    printf("C = %.3f, D = %.4f\n", C, D);
    
    printf("A = %.1f, B = %.1f\n", A, B);
    printf("C = %.1f, D = %.1f\n", C, D);
    
    printf("A = %.2f, B = %.2f\n", A, B);
    printf("C = %.2f, D = %.2f\n", C, D);
    
    printf("A = %.3f, B = %.3f\n", A, B);
    printf("C = %.3f, D = %.3f\n", C, D);
    
    printf("A = %.3E, B = %.3E\n", A, B);
    printf("C = %.3E, D = %.3E\n", C, D);
    
    printf("A = %.0f, B = %.0f\n", A, B);
    printf("C = %.0f, D = %.0f\n", C, D);
    
    return 0;
}
