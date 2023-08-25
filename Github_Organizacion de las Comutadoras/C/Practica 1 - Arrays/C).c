#include <stdio.h>

int main(){
    
    int x, a;
    
    printf("Ingrese el limite del array: ");
    scanf("%d", &x);
    
    int idUsuarios [x];
    
    for(int i = 0; i < x; i++){
        
        printf("Ingrese un ID: ");
        scanf("%d", &idUsuarios[i]);
        
    }
    
    for(int i = 0; i < x; i++){
        
        printf("ID: %d\n", idUsuarios[i]);
        
    }

}
