/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 29/04/2026
Objetivo    : Decodificar Cifra de César: deslocar letras maiúsculas N posições à esquerda (modular 26).
Aprendizado : Ler N casos de teste com controle de loop; Processar string caractere por caractere; Cálculo modular para deslocamento circular: (c - 'A' - desloc + 26) % 26 + 'A'
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char frase[51];
    int desloc;
    
    scanf("%d", &N);
    getchar();
    
    for (int caso = 0; caso < N; caso++) {
        fgets(frase, 51, stdin);
        int len = strlen(frase);
        if (frase[len-1] == '\n') {
            frase[len-1] = '\0';
        }
        
        scanf("%d", &desloc);
        getchar();
        
        for (int i = 0; frase[i] != '\0'; i++) {
            if (frase[i] >= 'A' && frase[i] <= 'Z') {
                frase[i] = ((frase[i] - 'A' - desloc + 26) % 26) + 'A';
            }
        }
        
        printf("%s\n", frase);
    }
    
    return 0;
}
