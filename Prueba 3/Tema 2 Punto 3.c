#include <stdio.h>

int main(){

    int cantDeNotas, aprobados, desaprobados, i;
    float nota;

    printf("Cuantas notas va ingresar?\n");
    scanf("%d", &cantDeNotas );

    for(i = 0; i < cantDeNotas ; i++ ){

        printf("Ingrese la nota: ");
        scanf("%f", &nota);

        if (nota >= 6){
            aprobados = aprobados + 1;
        }

    }
    printf("Hubo %d aprobados\n", aprobados);
    printf("Hubo %d desaprobados\n", cantDeNotas - aprobados );

}
