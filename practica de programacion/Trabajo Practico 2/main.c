#include <stdio.h>
#include <stdlib.h>
#define CANT 20



struct eAgenda{
    char nombre[31];
    char apellido[31];
    long int dni;
    int isEmpty;

};

/*int alta{
    struct eEmpleado emple[CANT];
    int i;

    //for(i=0;i<CANT;i++){

    printf("ingrese un numero de legajo:");
    scanf("%d",&emple[i].legajo);

    printf("ingrese un nombre:");
    fflush(stdin);
    fgets(emple[i].nombre,31,stdin);//
    //scanf("%s",emple[i].nombre);// no lleva el & porque lleva el nombre del array --emple.nombre = &emple.nombre[].

    printf("ingrese el salario:");
    scanf("%f",&emple[i].salario);

    emple[i].isEmpty =0;



return 0;
}
*/


int espacioLibre(){
    struct eAgenda agendados[CANT];
    int i, retorno;
    for(i=0;i<CANT;i++){
        if (agendados[i].isEmpty == 1){
            agendados[i].isEmpty = 0;
            retorno = i;
            break;
        }else{
        retorno = -1;
        }
    }
    return retorno;


int main()

{
 struct eAgenda agendados[CANT];
 int opcion;
 int i;


 /*
 for(i=0;1<CANT;i++){
    pers[i].isEmpty=1;
 }
*/
    do{
        printf("----------------MENU----------------");
        printf("\nElija una opcion: \n");
        printf("\n1. Altas:");
        printf("\n2. Bajas:");
        printf("\n3. Modificiaciones.");
        printf("\n4. Salir");

        scanf("%d",&opcion);

        switch(opcion){

    case 1:
        printf("\n\n-------------------------------ALTAS-------------------------------\n\n");

        printf("ingrese  Nombre:");
        fgets(agendados[i].nombre,31,stdin);

        printf("ingrese  Apellido:");
        fflush(stdin);
        fgets(agendados[i].apellido,31,stdin);//
        //scanf("%s",emple[i].nombre);// no lleva el & porque lleva el nombre del array --emple.nombre = &emple.nombre[].

        printf("ingrese DNI:");
        scanf("%ld",&agendados[i].dni);

        agendados[i].isEmpty=0;

                break;

    case 2:
        printf("\n\nopcion 2");


        break;

    case 3:
        printf("\n\nopcion 3");
        break;

    case 4:
        break;
    default: ;


        }

    }while(opcion!=4);
    printf("salir");

    return 0;
}
