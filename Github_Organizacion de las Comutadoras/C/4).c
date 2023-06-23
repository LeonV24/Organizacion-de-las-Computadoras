#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese el numero a corroborar si es par o impar: ");
    scanf("%d" , &numero);



    if (numero%2 == 0 ){
        printf("El numero es par.");
    }
    else{
        printf("El numero es impar");
    }
}
