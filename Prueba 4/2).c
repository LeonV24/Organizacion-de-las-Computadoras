#include <stdio.h>
#include <stdlib.h>

int main(){

    int ventas [7], ventasTotales;

    for(int i = 0; i < 7; i++){

        printf("Ingrese la cantidad de ventas que se realizo en el dia %d: ", i+1);
        scanf("%d", &ventas[i]);
        ventasTotales = ventasTotales + ventas[i];
        system("cls");

    }

    printf("Las ventas totales fueron de %d", ventasTotales);

}
