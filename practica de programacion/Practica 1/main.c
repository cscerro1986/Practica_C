#include <stdio.h>
#include <stdlib.h>
#include "UTN_biblioteca.h"


//int multiplicacion();
int main()
{
    /*
    int numero1;
    int numero2;
    int resultado;

    float numero3;
    float numero4;

 */
    char nombre[30];

    printf("Nombre");

    //scanf("%s",&nombre);

    utn_pasarAminuscula(&nombre);
    printf("%s",nombre);


/*
    utn_getEntero(&numero1,"ingrese un numero","Error, ingrese un numero",1,10,3);
    utn_getEntero(&numero2,"Ingrese el segundo numero","Error, ingrese el numero nuevamente", 1,10,3);

    resultado=utn_multiplicacion(&numero1,&numero2);
    printf("el resultado de la multiplicacion es %d",resultado);


    utn_getFlotante(&numero3,"ingrese un numero flotante","Error, intentelo nuevamente",1,100,2);
    utn_getFlotante(&numero4,"Ingrese un segundo Flotante","Error, ingrese nuevamente",1,100,2);

    utn_cambioDeLugarFlotante(&numero3,&numero4);

    printf("el numero uno es %.2f",numero3);
    printf("El segundo numero es %.2f",numero4);

*/
    return 0;

}




