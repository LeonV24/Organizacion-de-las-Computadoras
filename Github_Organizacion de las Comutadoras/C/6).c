#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero positivo o negativo: ");
    scanf("%d" , &numero);



    if (numero >= 0 ){
        printf("El numero es positivo");
    }
    else{
        printf("El numero es negativo");
    }
}
