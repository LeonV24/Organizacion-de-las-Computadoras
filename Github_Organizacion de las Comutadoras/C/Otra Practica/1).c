#include <stdio.h>

int main(){

    int cantDeNotas, x;
    float notaMayor = 0, nota;

    printf("Cuantas notas va a ingresar?\n");
    scanf("%d", &cantDeNotas);

    for( x = 0 ; x < cantDeNotas ; x++ ){

        printf("Ingrese una nota: ");
        scanf("%f", &nota);

        if(nota > notaMayor){
            notaMayor = nota;
        }

    }

    printf("La nota mayor de las notas ingresadas fue: %f", notaMayor);

}
