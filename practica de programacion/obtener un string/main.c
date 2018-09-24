#include <stdio.h>
#include <stdlib.h>

static int getInt(int*pResultado);

int main()
{
    char letra[64];
    printf("Ingrese un letra por favor");
    scanf("%s",letra);
    //getInt(&letra);

    printf("%s",&letra);
    return 0;
}
/*

static int getInt(int*pResultado){

    char buffer[64];


*/
