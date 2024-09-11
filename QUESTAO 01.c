#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11]; 
    char chute;       
    int vidas;        

   
    printf("Digite a palavra secreta (até 10 letras): ");
        scanf("%s", palavra);

    
    vidas = strlen(palavra) + 2;

    
    while (vidas > 0) {
        
        printf("A palavra é: ");
            for (int i = 0; palavra[i] != '\0'; i++) {
                 printf("_ ");
        }
    printf("\n");

      
    printf("Chute uma letra: ");
        scanf(" %c", &chute);

       
        
        vidas--;
        printf("Você errou! Vidas restantes: %d\n", vidas);
    }

    
        printf("Você perdeu! A palavra era: %s\n", palavra);

        return 0;
}