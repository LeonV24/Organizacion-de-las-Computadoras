#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, cantVentasDia1, cantVentasDia2, cantVentasDia3, cantVentasDia4, cantVentasDia5 ;

    for(i = 1; i < 6 ; i++){
        switch(i){
            case 1:
                printf("Dia 1\n");
                printf("Cuantas ventas se realizaron?\n");
                scanf("%d", &cantVentasDia1);
                break;

            case 2:
                printf("Dia 2\n");
                printf("Cuantas ventas se realizaron?\n");
                scanf("%d", &cantVentasDia2);
                break;

            case 3:
                printf("Dia 3\n");
                printf("Cuantas ventas se realizaron?\n");
                scanf("%d", &cantVentasDia3);
                break;

            case 4:
                printf("Dia 4\n");
                printf("Cuantas ventas se realizaron?\n");
                scanf("%d", &cantVentasDia4);
                break;

            case 5:
                printf("Dia 5\n");
                printf("Cuantas ventas se realizaron?\n");
                scanf("%d", &cantVentasDia5);
                break;


        }


    }
    if(cantVentasDia1 > cantVentasDia2 && cantVentasDia1 > cantVentasDia3 && cantVentasDia1 > cantVentasDia4 && cantVentasDia1 > cantVentasDia5){

        printf("El dia que mas ventas se realizaron fue el dia 1");

    } else if(cantVentasDia2 > cantVentasDia3 && cantVentasDia2 > cantVentasDia4 && cantVentasDia2 > cantVentasDia5){

        printf("El dia que mas ventas se realizaron fue el dia 2");

    } else if(cantVentasDia3 > cantVentasDia4 && cantVentasDia3 > cantVentasDia5){

        printf("El dia que mas ventas se realizaron fue el dia 3");

    } else if(cantVentasDia4 > cantVentasDia5){

        printf("El dia que mas ventas se realizaron fue el dia 4");

    } else if (cantVentasDia4 < cantVentasDia5){

        printf("El dia que mas ventas se realizaron fue el dia 5");

    } else {

        printf("En todos los dias se vendieron las mismas cantidades");

    }

}
