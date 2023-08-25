#include <stdio.h>

int main(){
    
    char dnis [50][50] = {};
    
    for(int i = 0; i < 3; i++){
        
        printf("Ingrese un DNI (8 caracteres limite): ");
        scanf("%s", &dnis[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("DNI %d: %s\n", i + 1 ,dnis[i]);
    }

}
