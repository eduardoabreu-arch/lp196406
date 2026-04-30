/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 29/04/2026
Objetivo    : Ler 100 valores inteiros. Apresentar então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : Declaração e uso de vetor fixo int V[100] para armazenar todos os valores; Laço for duplo: um para leitura, outro para busca do maior valor; Indexação de vetor com posições de 0 a 99 (ajuste para posição 1 a 100)
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int V[100];
    int maior = -1;
    int posicao = 0;
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &V[i]);
    }
    
    for (int i = 0; i < 100; i++) {
        if (V[i] > maior) {
            maior = V[i];
            posicao = i + 1; 
        }
    }
    

    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
