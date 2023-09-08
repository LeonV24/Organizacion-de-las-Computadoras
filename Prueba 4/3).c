#include <stdio.h>
#include <stdlib.h>

int main(){

    char ventas [7][99];

    for(int i = 0; i < 7; i++){

        printf("Ingrese un pais: \n");
        scanf("%s", &ventas[i]);
        system("cls");
    }
}
