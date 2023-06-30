#include <stdio.h>

int main()
{
    float numero, numero1, resultado;
    printf("Ingrese el primer numero: ");
    scanf("%f", &numero);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero1);

    resultado = numero + numero1;
    printf("La suma de los dos numeros es de %.2f \n", resultado);

    resultado = numero - numero1;
    printf("La resta de los dos numeros es de %.2f \n", resultado);

    resultado = numero / numero1;
    printf("La division de los dos numeros es de %.2f \n", resultado);

    resultado = numero * numero1;
    printf("La multiplicacion de los dos numeros es de %.2f \n", resultado);
}
