#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



typedef struct {

    char nombre[50];
    unsigned int edad;
    long int dni;
    int estado;

}EPersona;


void cargarDatosHardCode(EPersona []);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona [], int, long int);

void cargarPersona(EPersona [], int);


void ordenarListadoPersonas (EPersona [], int );

void imprimirListadoPersonas (EPersona [], int );

void GraficoListadoPersonas (EPersona [], int );



#endif // FUNCIONES_H_INCLUDED
