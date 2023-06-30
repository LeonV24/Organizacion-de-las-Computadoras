#include <stdio.h>

int main()
{
    float n1, n2, n3, nf;
    printf("Ingrese la primer nota: ");
    scanf("%f", &n1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &n2);
    printf("Ingrese la tercer nota: ");
    scanf("%f", &n3);

    nf = (n1 + n2 + n3 )/ 3 ;

    if(nf >= 6){
        printf("Usted aprobo.");
    }else{
        printf("Usted desaprobo");
    }
}
