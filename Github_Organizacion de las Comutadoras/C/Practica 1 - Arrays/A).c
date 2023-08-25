#include <stdio.h>

int main(){
    
    char nombres [50][50] = {};
    
    for(int i = 0; i < 2; i++){
        
        printf("Ingrese un nombre: ");
        scanf("%s", &nombres[i]);
    }
    for(int i = 0; i < 2; i++){
        printf("Nombres: %s\n",nombres[i]);
    }

}
