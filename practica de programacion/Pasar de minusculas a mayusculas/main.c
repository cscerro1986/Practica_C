#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//using namespace std;
/*
int main()
{
   char Palabra[]= "PROGRAMADORES somos Nosotros";

   strlwr(Palabra);

   printf("%s",Palabra);

    return 0;
}*/

void utn_pasarAminuscula(char* palabra){
    palabra=strcpy(strlwr(palabra));

}
