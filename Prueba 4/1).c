#include <stdio.h>

int main() {
    
    int limite;
    
    printf("Ingrese la cantidad de notas a ingresar: ");
    scanf("%d", &limite);
    
    float notas [limite], notaMasAlta, notaMasBaja = 999999, promedio;
    
    for(int i = 0; i < limite; i++){
        
        printf("Ingrese una nota: ");
        scanf("%f", &notas[i]);
        if(notas[i] > notaMasAlta){
            notaMasAlta = notas[i];
        }else if(notas[i] < notaMasBaja){
            notaMasBaja = notas[i];
        }
        
        promedio = promedio + (notas[i]/limite);
        
    }
    
    printf("La nota mas alta es: %f\n", notaMasAlta);
    printf("La nota mas alta es: %f\n", notaMasBaja);
    printf("El promedio de las notas es: %f\n", promedio);
    
    
}
