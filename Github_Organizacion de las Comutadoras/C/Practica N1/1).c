#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese un numero del 1-12 : ")
    scanf("%d", &n)
    switch(n){
        case 1:
            printf("Ingresaste el numero 1 que corresponde al mes de enero.");
        break;
        case 2:
            printf("Ingresaste el numero 2 que corresponde al mes de febrero.");
        break;
        case 3:
            printf("Ingresaste el numero 3 que corresponde al mes de marzo.");
        break;
        case 4:
            printf("Ingresaste el numero 4 que corresponde al mes de abril.");
        break;
        case 5:
            printf("Ingresaste el numero 5 que corresponde al mes de mayo.");
        break;
        case 6:
            printf("Ingresaste el numero 6 que corresponde al mes de junio.");
        break;
        case 7:
            printf("Ingresaste el numero 7 que corresponde al mes de julio.");
        break;
        case 8:
            printf("Ingresaste el numero 8 que corresponde al mes de agosto.");
        break;
        case 9:
            printf("Ingresaste el numero 9 que corresponde al mes de septiembre.");
        break;
        case 10:
            printf("Ingresaste el numero 10 que corresponde al mes de octubre.");
        break;
        case 11:
            printf("Ingresaste el numero 11 que corresponde al mes de noviembre.");
        break;
        case 12:
            printf("Ingresaste el numero 12 que corresponde al mes de septiembre.");
        break;
        default:
            printf("ERROR");
        break;
}
