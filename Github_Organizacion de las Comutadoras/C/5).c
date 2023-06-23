#include <stdio.h>

int main()
{
    int numero;
    printf("Mayor o menor de edad: ");
    scanf("%d" , &numero);



    if (numero == 18 ){
        printf("Usted es mayor de edad");
    }
    else{
        printf("Ustes es menor de edad");
    }
}
