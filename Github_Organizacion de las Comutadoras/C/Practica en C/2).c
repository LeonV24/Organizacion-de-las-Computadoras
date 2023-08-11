#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo = 1000, opcion, x, true_;
    float monto;

    true_ = 0;

    printf("Ingrese su numero de usuario\n");
    scanf("%d", &x);
    printf("Ingrese su clave\n");
    scanf("%d", &x);
    system("cls");

    printf("----------------\n");
    printf("|  Bienvenido  |\n");
    printf("----------------\n");

    do{
        printf("Su saldo es de %d\n", saldo);
        printf("");
        printf("Que operacion quiere realizar??\n");
        printf("1. Ingresar moni   2. Pagar servicios\n");
        scanf("%d", opcion);
        system("cls");
        switch(opcion){

            case 1:
                printf("Cuanta plata quiere ingresar: ");
                scanf("%f", monto);
                saldo = saldo + monto
                printf("A ingresado %d", monto);
                system("cls");
                break;

            case 2:
                printf("Que servicio quiere pagar?\n");
                printf("1. Agua    2. Gas\n");
                printf("3. Luz     4. Impuestos\n");
                scanf("%d", opcion);
                if(opcion == 1){

                    printf("Cuanto es el monto a abonar: ");
                    scanf("%f", monto);
                    if(monto <= saldo){
                        saldo = saldo - monto;
                    }

                }else if(opcion == 2){

                    printf("Cuanto es el monto a abonar: ");
                    scanf("%f", monto);
                    if(monto <= saldo){
                        saldo = saldo - monto;
                    }

                }else if(opcion == 3){

                    printf("Cuanto es el monto a abonar: ");
                    scanf("%f", monto);
                    if(monto <= saldo){
                        saldo = saldo - monto;
                    }

                }else if(opcion == 4){

                    printf("Cuanto es el monto a abonar: ");
                    scanf("%f", monto);
                    if(monto <= saldo){
                        saldo = saldo - monto;
                    }

                }else{
                    printf("ERROR");
                }

                break;

        }
        printf("Quiere seguir realizando operaciones?\n");
        printf("1. Si              2. No\n");
        scanf("%d", opcion);

        if(opcion == 2){
            break;
        }

    }while(true_ == 0);
    printf("Gracias por elegirnos");

}
