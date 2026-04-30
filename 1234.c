/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 29/04/2026
Objetivo    : Transformar sentença em "dançante": 1ª letra maiúscula, letras subsequentes alternam case ignorando espaços.
Aprendizado : Processar string caractere por caractere com dois ponteiros (leitura/escrita); Detectar e preservar espaços na posição original; Rastrear estado de case alternado (maiúscula/minúscula) apenas para letras; Converter case com funções tolower() e toupper()
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[51];
    
    while (fgets(frase, 51, stdin) != NULL) {
        int estado = 1; 
        int i = 0, j = 0;
        int len = strlen(frase);
        
        if (frase[len-1] == '\n') {
            frase[len-1] = '\0';
            len--;
        }

        while (i < len) {
            if (frase[i] == ' ') {
                frase[j] = ' ';
                j++;
            } else if (isalpha(frase[i])) {
                if (estado) {
                    frase[j] = toupper((unsigned char)frase[i]);
                } else {
                    frase[j] = tolower((unsigned char)frase[i]);
                }
                estado = !estado;  
                j++;
            } else {
                frase[j] = frase[i];
                j++;
            }
            i++;
        }
        frase[j] = '\0';
        
        printf("%s\n", frase);
    }
    
    return 0;
}
