#include <stdio.h>
#include "Player.h"

int main(){
    int opcion;
    do
    { 
    printf("**Bienvenido al juego del laberinto!**\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",opcion);

    switch (opcion)
    {
    case 1:
    
        break;
    
    case 2:
        printf("Creado por Dilan Ati - A00093986");
        break;

    case 3:
         printf("Haz salido del juego.");
         break;
    }
    } while(opcion !=3);
    return 0;
}