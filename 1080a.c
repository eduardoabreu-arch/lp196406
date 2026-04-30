/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 29/04/2026
Objetivo    : Ler 100 valores inteiros. Apresentar então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : Usar variáveis para controlar maior valor e sua posição durante leitura sequencial; laço for com contador para ler exatamente 100 valores; comparação condicional para atualizar maior valor e posição
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int maior = -1;
    int posicao = 0;
    int valor;
    
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);
        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
