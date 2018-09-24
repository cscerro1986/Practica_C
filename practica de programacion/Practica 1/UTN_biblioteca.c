#include <stdio.h>
#include <stdlib.h>


int utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
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


int utn_multiplicacion(int* numeroUno,int * numeroDos){

    int resultado;

    resultado=*numeroUno* *numeroDos;


    return resultado;
}



int utn_cambioDeLugarFlotante(float* num1, float* num2){

   float auxiliar;

    auxiliar=*num1;
    *num1=*num2;
    *num2=auxiliar;

return 0;
}

/*
void utn_Burbujeo{

int array[5]={1,2,6,3,7}
int i;
int j;
int auxiliar;


for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){

        if(array[j]>array[i]){
            auxiliar=array[i];
            array[i]=array[j];
            array[j]=auxiliar;
            }
        }
    }
}
*/

void utn_pasarAminuscula(char *palabra){
    scanf("%s",&palabra);
    //strlwr(palabra);
}

