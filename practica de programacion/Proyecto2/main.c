#include <stdio.h>
#include <stdlib.h>


int ingreseNumero(int &minimo, int &maximo);

int main()
{
    int minimo=1;
    int maximo=12;
    int numero;

    numero=ingreseNumero(1,12);
    printf("\n\nEl numero ingresado es: %d\n\n",numero);

    return 0;
}


int ingreseNumero(int &minimo, int &maximo){


    int num1;
    int numAux;

    printf("escoge un numero: ");
    scanf("%d",&numAux);


    if(numAux<&minimo&&numAux<&maximo){
    num1=numAux;
    }else{

    printf(" escoge otro");
    }
    return num1;
}

