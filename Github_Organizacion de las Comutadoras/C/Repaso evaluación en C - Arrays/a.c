#include <stdio.h>
#include <stdlib.h>

int main(){

    int mayorVenta = 0, menorVenta = 999, limiteArray, fin;

    printf("Ingrese el limite del array: ");
    scanf("%d", &limiteArray);
    system("cls");
        
    int ventas [limiteArray];

    for(int i = 0; i< limiteArray; i++){

        printf("Ingrese la venta %d: ", i+1);
        scanf("%d", &ventas[i]);
        if(ventas[i] < menorVenta){
            menorVenta = ventas[i];
        }else if(ventas[i] > mayorVenta){
            mayorVenta = ventas[i];
        }
        system("cls");

    }

    printf("La venta mayor fue: %d\n", mayorVenta);
    printf("La venta menor fue: %d\n", menorVenta);
    printf("Ingrese cualquier numero para terminar...");
    scanf("%d", &fin);
}

