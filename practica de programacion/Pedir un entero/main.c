#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    utn_getEntero(&numero,"Ingrese un numero del 1 al 10","Error",1,10,3);

    printf("%d",numero);
    return 0;
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
