#include <stdio.h>
#include <stdlib.h>

int main() {

    int tipoDeCafe, cafe1, cantCafe1, cafe2, cantCafe2, cafe3, cantCafe3, cafe4, cantCafe4, a , trueInfinito = 0;

    printf("Bienvenido a Cafe Martinez\n");

    while(trueInfinito == 0){

        printf("Que cafe quiere llevar?\n");
        printf("1.Latte  2.Capuccino  3.Cafe con leche\n");
        scanf("%d", &tipoDeCafe);
        system("cls");

        switch(tipoDeCafe){

            case 1:
                printf("Cuantos cafes quiere llevar?\n");
                scanf("%d", &cafe1 );
                cantCafe1 = cantCafe1 + cafe1;
                system("cls");
                break;

            case 2:
                printf("Cuantos cafes quiere llevar?\n");
                scanf("%d", &cafe2 );
                cantCafe2 = cantCafe2 + cafe2;
                system("cls");
                break;

            case 3:
                printf("Cuantos cafes quiere llevar?\n");
                scanf("%d", &cafe3 );
                cantCafe3 = cantCafe3 + cafe3;
                system("cls");
                break;

        }

        printf("Quiere seguir comprando cafe?\n");
        printf("1. Si  2.No\n");
        scanf("%d", &a);
        system("cls");
        if(a==2){
            break;
        }



    }
    printf("La cantidad de lattes vendidas son de: %d\n", cantCafe1);
    printf("La cantidad de capuccinos vendidas son de: %d\n", cantCafe2);
    printf("La cantidad de cafes con leche vendidas son de: %d\n", cantCafe3);

}
