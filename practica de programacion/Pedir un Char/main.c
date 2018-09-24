#include <stdio.h>
#include <stdlib.h>
#include "UTN biblioteca.h"

int main()
{
    char letra;
    utn_getChar(&letra,"Ingrese una letra","Error",65,66,3);

    printf("%c",letra);
    return 0;
}


int utn_getChar(char* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)

{
    int ret =-1;
    char letraAux;


    for(reintentos;reintentos>0;reintentos--){
        printf(mensaje);
        scanf("%c",&letraAux);
        if(letraAux>=minimo&&letraAux<=maximo){

            *pResultado=letraAux;
            ret = 0;
            break;
        }else{
            fflush(stdin);
            printf(mensajeError);

        }

    }

return ret;
}

