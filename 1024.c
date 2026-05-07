/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 06/05/2026
Objetivo    : Solicitaram para que você construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las.
Aprendizado : Uso de string para embaralhar e desembaralhar a palavra.
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int N, n;
    char aux, M[1001];

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", &M);

        n = strlen(M);
        for(int j = 0; j < n; ++j){
            if(isalpha(M[j])){
                M[j] += 3;
            }
        }
        for(int j = 0; j < n/2; ++j){
            aux = M[j];
            M[j] = M[n - 1 - j];
            M[n - 1 - j] = aux;
        }
        for(int j = n/2; j < n; ++j){
            --M[j];
        }

        printf("%s\n", M);
    }

    return 0;
}
