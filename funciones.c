#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int obtenerEspacioLibre(EPersona lista[], int tam)
{
    int index = -1;

    for(int i=0;i<tam;i++){
        if(lista[i].dni==0){
            index=i;
            break;
        }
    }

    return index;
}



void cargarPersona(EPersona lista[], int index)
{



    printf("Ingrese DNI: ");
    scanf("%ld",&lista[index].dni);

    //validar DNI

    fflush(stdin);
    printf("\nIngrese Nombre: ");
    gets(lista[index].nombre);

    //validar Nombre

    fflush(stdin);
    printf("\nIngrese Edad: ");
    scanf("%d",&lista[index].edad);

    //validar Entero

    lista[index].estado = 1;

}

void imprimirListadoPersonas (EPersona lista[], int tam)
{
    int i;
    int flag= 0;


    printf("_______________________________________________________\n");



for(i=0;i<tam;i++)
    {
        if(lista[i].estado==1)
        {

            printf("\n%s\t%ld\t%d \n", lista[i].nombre, lista[i].dni, lista[i].edad);
            flag = 1;


        }
    }
    if(flag == 0)
    {
        printf("\nNo existen registros cargados\n");
    }

    printf("_______________________________________________________\n");

}



void cargarDatosHardCode(EPersona lista[])
{

    long int dni[3]={24083235,39457791,27775664};
    char nombre[3][50]={"Maria Mercedes","Micaela Colella","Galo Matos"};
    unsigned int edad[3]={43,22,40};
    int estado[3]={1,1,1};

    for(int i=0; i<3; i++)
    {
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].dni=dni[i];
        lista[i].edad=edad[i];
        lista[i].estado=estado[i];

    }
}


int buscarPorDni(EPersona lista[], int tam, long int dni)
{
int index = -1;


    for(int i=0;i<tam;i++){
        if(lista[i].dni==dni){
            index = i;
        }
    }





return index;


}



