#include <stdio.h>

int main() {
    int contas[100]; 
    int conta_buscada, inicio, fim, meio, comparacoes = 0;

    
    for (int i = 0; i < 100; i++) {
        contas[i] = i + 1; 
    }

        printf("Digite o numero da conta que deseja buscar: ");
        scanf("%d", &conta_buscada);

    
    inicio = 0;

    fim = 99;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        comparacoes++;

        if (contas[meio] == conta_buscada) {
            
            printf("A conta foi encontrada na posicao %d\n", meio + 1);
            
                printf("Numero de comparacoes: %d\n", comparacoes);
            return 0;
            
        } else if (contas[meio] < conta_buscada) {
            
            inicio = meio + 1;
            
        } else {
            fim = meio - 1;
        
        }
    }

    printf("A conta nao foi encontrada.\n");
    
        printf("Numero de comparacoes: %d\n", comparacoes);

    return 0;
}