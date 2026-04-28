/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N.
Aprendizado : Aprendemos o uso do vetor para calcular a tabuada de um número maior 2<n<1000, onde também foram usadas algumas regras para a formatação do scanf como por exemplo /n que pula linha.
-------------------------------------------------------------------------- */

int main() {
 
    int n, i;
    
    scanf ("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", i, n, i * n);
 
    return 0;
}
