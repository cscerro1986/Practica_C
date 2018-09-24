#include <stdio.h>
#include <stdlib.h>


float utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)

{
    int ret =-1;
    float numeroAux;

    for(reintentos;reintentos>0;reintentos--){
        printf(mensaje);

        scanf("%f",&numeroAux);
        fflush(stdin);

        if(numeroAux>=minimo&&numeroAux<=maximo){

            *pResultado=numeroAux;
            ret = 0;
            break;
        }else{

            printf(mensajeError);
            fflush(stdin);

        }

    }

return ret;
}

