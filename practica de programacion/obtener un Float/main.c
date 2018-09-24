#include <stdio.h>
#include <stdlib.h>
#include <float.h>

float utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int main()
{
    float flotante;
    utn_getFlotante(&flotante,"Ingrese un numero\n\n","\nError",0,50000000,3);

    //fflush(stdin);
    printf("\n\n\nEl numero ingresado es: %.2f\n\n\n",flotante);
    return 0;
}
/*
float utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)

{
    int ret =-1;
    float numeroAux;


    for(reintentos;reintentos>0;reintentos--){
        printf(mensaje);
        scanf("%f",&numeroAux);
        if(numeroAux>=minimo&&numeroAux<=maximo){

            *pResultado=numeroAux;
            ret = 0;
            break;
        }else{

            printf(mensajeError);

        }

    }

return ret;
}

*/
