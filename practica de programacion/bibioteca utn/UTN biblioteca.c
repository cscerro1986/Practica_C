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


int utn_getEntero(int * pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)

{
    int ret =-1;
    int numeroAux;


    for(reintentos;reintentos>0;reintentos--){
         printf(mensaje);
        scanf("%d",&numeroAux);
        if(numeroAux>=minimo&&numeroAux<=maximo){

            *pResultado=numeroAux;
            ret = 0;
            break;
        }else{
            fflush(stdin);
            printf(mensajeError);

        }

    }


/*
    while(reintentos>0){

        printf(mensaje);
        scanf("%d",&numeroAux);
      if(numeroAux>=minimo&&numeroAux<=maximo){

        *pResultado=numeroAux;
        ret = 0;
        break;


      }else{

      fflush(stdin);
      printf(mensajeError);
      reintentos--;

      }
      if(reintentos==0){

        ret=-1;

      }

    }


*/

return ret;
}
