#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int notas[50]; 
int contagem[5] = {0, 0, 0, 0, 0}; 

    
    srand(time(NULL));

    
    for (int i = 0; i < 50; i++) {
        notas[i] = rand() % 5 + 1; 
        }

    
    for (int i = 0; i < 50; i++) {
        int nota = notas[i];
        contagem[nota - 1]++; 
    }

    
    printf("Resultados da pesquisa:\n");
        for (int i = 0; i < 5; i++) {
            printf("Nota %d: %d votos\n", i + 1, contagem[i]);
    }

    return 0;
}