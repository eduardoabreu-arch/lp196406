/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 29/04/2026
Objetivo    : Ler 2 valores inteiros X e Y. A seguir, calcular e mostrar a soma dos números impares entre eles.
Aprendizado : Determinar o menor e maior valor de um intervalo usando condicional if-else; Usar laço for para percorrer intervalos numéricos; Verificar se um número é ímpar usando o operador módulo (%)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int X, Y;
    int inicio, fim;
    int soma = 0;
    
    scanf("%d %d", &X, &Y);
    
    if (X < Y) {
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }
    
    for (int i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
