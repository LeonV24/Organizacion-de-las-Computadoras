#include <stdio.h>
#include <stdlib.h>

int main(){

    int subtotal, total, cantDeBoligrafos, cantDeLibros, cantDeMochilas, cantDeCuadernos, opcion, x = 0;

    printf("Bienvenido\n");

    do{
        printf("Que va a querer comprar?\n");
        printf("1.Libros ($9000)   2.Cuadernos ($1400)\n");
        printf("3.Boligrafos ($1000)  4.Mochila ($32000)\n");
        scanf("%d", &opcion);
        system("cls");
        switch(opcion){

            case 1:
                printf("Cuantos libros quiere comprar?\n");
                scanf("%d", &cantDeLibros);
                printf("El subtotal seria de %d\n", cantDeLibros * 9000);
                break;

            case 2:
                printf("Cuantos cuadernos quiere comprar?\n");
                scanf("%d", &cantDeCuadernos);
                printf("El subtotal seria de %d\n", cantDeCuadernos * 1400);
                break;

            case 3:
                printf("Cuantos boligrafos quiere comprar?\n");
                scanf("%d", &cantDeBoligrafos);
                printf("El subtotal seria de %d\n", cantDeBoligrafos * 1000);
                break;

            case 4:
                printf("Cuantas mochilas quiere comprar?\n");
                scanf("%d", &cantDeMochilas);
                printf("El subtotal seria de %d\n", cantDeMochilas * 32000);
                break;

        }

        system("cls");
        printf("Queres seguir comprando?\n");
        printf("1.Si  2.No\n");
        scanf("%d", &opcion);
        system("cls");

        if(opcion == 2){
            break;
        }

    }while(x == 0);


    printf("--------------------------------------------------\n");
    printf("|                     TICKET                     |\n");
    printf("|------------------------------------------------|\n");
    printf("|                 Cant.          SubTotal        |\n");
    printf("|                                                |\n");
    printf("|      Libros      %d             %d             |\n", cantDeLibros,  cantDeLibros * 9000);
    printf("|      Cuadernos   %d             %d             |\n", cantDeCuadernos,  cantDeCuadernos * 1400);
    printf("|      Boligrafos  %d             %d             |\n", cantDeBoligrafos,  cantDeBoligrafos * 1000);
    printf("|      Mochilas    %d             %d             |\n", cantDeMochilas,  cantDeMochilas * 32000);
    printf("|                                                |\n");
    printf("|                                                |\n");
    printf("|                                                |\n");


}
