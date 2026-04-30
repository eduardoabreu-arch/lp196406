/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 29/04/2026
Objetivo    : Verificar se matriz 9x9 é solução válida de Sudoku (linhas, colunas, quadrantes 3x3).
Aprendizado : Usar matriz bidimensional int sudoku[9][9];
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int instancia = 1; instancia <= n; instancia++) {
        int sudoku[9][9];
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }
        
        int valido = 1;
        
        for (int i = 0; i < 9 && valido; i++) {
            int usado[10] = {0};
            for (int j = 0; j < 9; j++) {
                int num = sudoku[i][j];
                if (num < 1 || num > 9 || usado[num]) {
                    valido = 0;
                    break;
                }
                usado[num] = 1;
            }
        }
        
        for (int j = 0; j < 9 && valido; j++) {
            int usado[10] = {0};
            for (int i = 0; i < 9; i++) {
                int num = sudoku[i][j];
                if (num < 1 || num > 9 || usado[num]) {
                    valido = 0;
                    break;
                }
                usado[num] = 1;
            }
        }
        
        for (int bi = 0; bi < 3 && valido; bi++) {
            for (int bj = 0; bj < 3 && valido; bj++) {
                int usado[10] = {0};
                for (int i = bi*3; i < bi*3+3; i++) {
                    for (int j = bj*3; j < bj*3+3; j++) {
                        int num = sudoku[i][j];
                        if (num < 1 || num > 9 || usado[num]) {
                            valido = 0;
                            goto proxima;
                        }
                        usado[num] = 1;
                    }
                }
            }
        }
        
        proxima:
        
        printf("Instancia %d\n", instancia);
        if (valido) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }
    
    return 0;
}
