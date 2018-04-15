//Brenda Méndez López 
//Programa 1.1: recibe 2 datos y devuelve su promedio.

#include <conio.h>
#include <stdio.h>

int main (){
    float dato1, dato2, dato3, promedio;
    printf("Bienvenido.\n\n");
    printf("Este programa obtiene el promedio de dos numeros. \n");
    printf("Teclee sus datos separados por un espacio \n");
    scanf("%f %f", &dato1, &dato2);
    promedio = (dato1 + dato2 ) / 2;
    printf("El promedio es %4.1f ", promedio);
     printf("El programa ha terminado");
    printf("\n\nOprima cualquier tecla para terminar...");
    getch();   
}
