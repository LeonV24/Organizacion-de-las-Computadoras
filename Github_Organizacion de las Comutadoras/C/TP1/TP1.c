#include <stdio.h>
#include <stdbool.h>

int main() {

int cantAccion, cantFantasia, cantMatematica, cantFisica, cantInteligencia_Emocional, cantMarketing, cantInformatica, cantJudiciales, switch_, monto, montoTotal, cantLibros;
    do{
        printf("Seleccione el genero de los libros que quiere comprar (Cada libro sale 200$):\n");
        printf("1.Accion                  2.Fantasia\n");
        printf("3.Matematica              4.Fisica\n");
        printf("5.Inteligencia Emocional  6.Marketing\n");
        printf("7.Informatica             8.Judiciales\n");
        scanf("%d", &switch_);
        //system ("cls");
        switch(switch_){
            case 1:
                printf("Cuantos libros de Accion quiere comprar?");
                scanf("%d", &cantLibros);
                cantAccion = cantAccion + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 2:
                printf("Cuantos libros de Fantasia quiere comprar?");
                scanf("%d", &cantLibros);
                cantFantasia = cantFantasia + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 3:
                printf("Cuantos libros de Matematica quiere comprar?");
                scanf("%d", &cantLibros);
                cantMatematica = cantMatematica + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 4:
                printf("Cuantos libros de Fisica quiere comprar?");
                scanf("%d", &cantLibros);
                cantFisica = cantFisica + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 5:
                printf("Cuantos libros de Inteligencia Emocional quiere comprar?");
                scanf("%d", &cantLibros);
                cantInteligencia_Emocional = cantInteligencia_Emocional + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 6:
                printf("Cuantos libros de Marketing quiere comprar?");
                scanf("%d", &cantLibros);
                cantMarketing = cantMarketing + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 7:
                printf("Cuantos libros de Informatica quiere comprar?");
                scanf("%d", &cantLibros);
                cantInformatica = cantInformatica + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
            case 8:
                printf("Cuantos libros de Judiciales quiere comprar?");
                scanf("%d", &cantLibros);
                cantJudiciales = cantJudiciales + cantLibros;
                cantLibros = 0;
                //system("cls");
                break;
        }

        printf("Quiere seguir comprando?\n");
        printf("1.Si     2.No\n");
        scanf("%d", &switch_);
        if( switch_ == 2){
            break;
        }
        system("cls");

    }while(true);

}
