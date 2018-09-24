#include <stdio.h>
#include <stdlib.h>


int ingreseNumero();
int main()
{
 int numero;

 numero=ingreseNumero();
 printf("\n\nEl numero ingresado es: %d\n\n",numero);

 return 0;
}

int ingreseNumero(){

    int num1;
    printf("Ingrese un numero\n\n");
    scanf("%d",&num1);

    return num1;
}
