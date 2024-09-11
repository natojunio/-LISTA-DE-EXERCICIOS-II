#include <stdio.h>


int busca_binaria(int primos[], int tamanho, int numero) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (primos[meio] == numero) {
            return 1;  
            
        } else if (primos[meio] < numero) {
            inicio = meio + 1;
            
        } else {
            fim = meio - 1;
        }
    }

    return 0;  
}

int main() {
    
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
                    53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int numero;

    
    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero);

    
    if (numero < 1 || numero > 100) {
        
        printf("Numero fora do intervalo!\n");
        
    } else if (busca_binaria(primos, 25, numero)) {
        
        printf("O número %d e primo.\n", numero);
        
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }

    return 0;
}
