#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcion, calidadDeComida, comidaEconomicaPerro, comidaIntermediaPerro,comidaPremiunPerro, comidaEconomicaGato, comidaIntermediaGato,comidaPremiunGato;
    int comidaEconomicaLoro, comidaIntermediaLoro,comidaPremiunLoro, comidaEconomicaPez, comidaIntermediaPez,comidaPremiunPez;
    int cantDePerros, cantDeGatos, cantDeLoros, cantDePezes, cantidad;
    int estado = 0;

    while(estado == 0){
        printf("Quiere Adoptar un animal(1)  Comprar comida (2)");
        scanf("%d",&opcion);
        switch(opcion){

            case 1:
                printf("Que animal quiere adoptar?\n");
                printf("1.Perro 3.Gato\n");
                printf("2.Loro 4.Pez\n");
                scanf("%d", &opcion);
                switch(opcion){

                    case 1:
                        printf("Felicidades usted adopto a un perro");
                        cantDePerros++;
                        system("cls");
                        break;

                    case 2:
                        printf("Felicidades usted adopto a un loro");
                        cantDeLoros++;
                        system("cls");
                        break;

                    case 3:
                        printf("Felicidades usted adopto a un gato");
                        cantDeGatos++;
                        system("cls");
                        break;

                    case 4:
                        printf("Felicidades usted adopto a un pez");
                        cantDePezes++;
                        system("cls");
                        break;

                }
                break;

            case 2:
                printf("Para que animal quiere comprar comida?\n");
                printf("1.Perro 3.Gato\n");
                printf("2.Loro 4.Pez\n");
                scanf("%d", &opcion);
                switch(opcion){

                    case 1:
                        printf("Que calidad de comida para perro quiere?\n");
                        printf("1.Economica 2.Intermedia 3.Premiun");
                        scanf("%d", &calidadDeComida);
                        printf("Cuantas bolsas?");
                        scanf("%d", cantidad);
                        if(calidadDeComida == 1){
                            comidaEconomicaPerro = comidaEconomicaPerro + cantidad;
                        } else if(calidadDeComida == 2){
                            comidaIntermediaPerro = comidaIntermediaPerro + cantidad;
                        } else{
                            comidaPremiunPerro = comidaPremiunPerro + cantidad;
                        }
                        system("cls");
                        break;

                    case 2:
                        printf("Que calidad de comida para loro quiere?\n");
                        printf("1.Economica 2.Intermedia 3.Premiun");
                        scanf("%d", &calidadDeComida);
                        printf("Cuantas bolsas?");
                        scanf("%d", cantidad);
                        if(calidadDeComida == 1){
                            comidaEconomicaLoro = comidaEconomicaLoro + cantidad;
                        } else if(calidadDeComida == 2){
                            comidaIntermediaLoro = comidaIntermediaLoro + cantidad;
                        } else{
                            comidaPremiunLoro = comidaPremiunLoro + cantidad;
                        }
                        system("cls");
                        break;

                    case 3:
                        printf("Que calidad de comida para Gato quiere?\n");
                        printf("1.Economica 2.Intermedia 3.Premiun");
                        scanf("%d", &calidadDeComida);
                        printf("Cuantas bolsas?");
                        scanf("%d", cantidad);
                        if(calidadDeComida == 1){
                            comidaEconomicaGato = comidaEconomicaGato + cantidad;
                        } else if(calidadDeComida == 2){
                            comidaIntermediaGato = comidaIntermediaGato + cantidad;
                        } else{
                            comidaPremiunGato = comidaPremiunGato + cantidad;
                        }
                        system("cls");
                        break;

                    case 4:
                        printf("Que calidad de comida para pez quiere?\n");
                        printf("1.Economica 2.Intermedia 3.Premiun");
                        scanf("%d", &calidadDeComida);
                        printf("Cuantas bolsas?");
                        scanf("%d", cantidad);
                        if(calidadDeComida == 1){
                            comidaEconomicaPez = comidaEconomicaPez + cantidad;
                        } else if(calidadDeComida == 2){
                            comidaIntermediaPez = comidaIntermediaPez + cantidad;
                        } else{
                            comidaPremiunPez = comidaPremiunPez + cantidad;
                        }
                        system("cls");
                        break;

                }
                break;


            printf("Quiere seguir comprando/adoptando?\n");
            printf("1. Si        2. No");
            scanf("%d", &opcion);
            if(opcion == 2){
                break;
            }
            system("cls");
        }
    }
    printf("-------------------------------------------------\n");
    printf("                Animales adoptados           \n");
    printf("-------------------------------------------------\n");
    printf("La cantidad de perros adoptados fueron: %d\n", cantDePerros);
    printf("La cantidad de loros adoptados fueron: %d\n", cantDeLoros);
    printf("La cantidad de gatos adoptados fueron: %d\n", cantDeGatos);
    printf("La cantidad de pezes adoptados fueron: %d\n", cantDePezes);
    printf("-------------------------------------------------\n");
    printf("               Comida comprada \n");
    printf("-------------------------------------------------\n");
    printf("La cantidad de comida economica para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida intermedia para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida premiun para perros fue: %d\n", cantDePerros);
    printf("-------------------------------------------------\n");
    printf("La cantidad de comida economica para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida intermedia para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida premiun para perros fue: %d\n", cantDePerros);
    printf("-------------------------------------------------\n");
    printf("La cantidad de comida economica para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida intermedia para perros fue: %d\n", cantDePerros);
    printf("La cantidad de comida premiun para perros fue: %d\n", cantDePerros);

}
