#include <stdio.h>
#include <stdlib.h>

int main() {

    int listaDeAlumnos, presentes, ausentes, chequeo;

    printf("Cuantos alumnos son en la lista?\n");
    scanf("%d", &listaDeAlumnos);
    printf("Cuantos alumnos estan presentes?\n");
    scanf ("%d", &presentes);
    printf("Cuantos alumnos estan ausentes?\n");
    scanf ("%d", &ausentes);

    chequeo = presentes + ausentes;

    if(chequeo == listaDeAlumnos){
        printf("Alumnos presentes: %d\n", presentes);
        printf("Alumnos ausentes: %d\n", ausentes);
    }
    printf("ERROR");
}
