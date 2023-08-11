#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palabra[20];
    char adivinado[20];
    int intentos = 6;
    int aciertos = 0;

    printf("Es el ahorcado\n");
    printf("Ingresa una palabra para adivinar (max. 19 letras): ");
    scanf("%s", palabra);

    for (int i = 0; i < strlen(palabra); i++) {
        adivinado[i] = '_';
    }
    adivinado[strlen(palabra)] = '\0';

    while (intentos > 0 && aciertos < strlen(palabra)) {
        char letra;
        printf("Palabra actual: %s\n", adivinado);
        system("cls")
        printf("Escribi una letra: ");
        scanf(" %c", &letra);

        int encontrado = 0;
        for (int i = 0; i < strlen(palabra); i++) {
            if (palabra[i] == letra && adivinado[i] != letra) {
                adivinado[i] = letra;
                aciertos++;
                encontrado = 1;
            }
        }

        if (!encontrado) {
            intentos--;
            printf("Te equivocaste de letra. Te quedan %d intentos.\n", intentos);
        }
    }

    if (aciertos == strlen(palabra)) {
        printf("Adivinaste la letra: %s!\n", palabra);
    } else {
        printf("Cagaste. La palabra era: %s.\n", palabra);
    }

}
