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

/**
 * Carga los datos de personas en lista (Array) cuyo tipo de dato es una estrctura EPersona que posee las variables char nombre, int edad y long int dni.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.

 */

void cargarPersona(EPersona [], int);

/**
 * Ordena por nombre los datos de personas en lista (Array) cuyo tipo de dato es una estrctura EPersona que posee las variables char nombre, int edad y long int dni.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.

 */

void ordenarListadoPersonas (EPersona [], int );


/**
 * Imprime en consola por nombre los datos de personas en lista (Array) cuyo tipo de dato es una estrctura EPersona que posee las variables char nombre, int edad y long int dni.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.

 */

void imprimirListadoPersonas (EPersona [], int );

/**
 * Grafica en consola por nombre los datos de personas en lista (Array) cuyo tipo de dato es una estrctura EPersona
 * El el Eje Y el numero de personas que
 * En el eje Y se marcarán la cantidad de personas en el grupo, y en el eje X el grupo dividido por edad en columnas <18 19-35 >35
 * @param tamaño del array.

 */

void GraficoListadoPersonas (EPersona [], int );


/** \brief leer un numero entero ingresado comprendido entre el minimo valor y el maximo valor

 * \param minimo valor
 * \param maximo valor
 * \return un entrero
 *
 */

int IngresarEntero(int, int);

/** \brief valida un numero entero ingresado se encuatre dentro de un rango
 * \param minimo valor entero
 * \param maximo valor entero
 * \return un entero validado
 *
 */

int validarEntero (int, int, int);

/** \brief leer un numero long entero ingresado comprendido entre el minimo valor y el maximo valor

 * \param minimo valor
 * \param maximo valor
 * \return un long entrero
 *
 */

long int IngresarLongEntero(long int, int);

/** \brief valida un numero long entero ingresado se encuatre dentro de un rango
 * \param minimo valor entero
 * \param maximo valor entero
 * \return un long entero validado
 *
 */

long int validarLongEntero (long int, int, int);

/** \brief valida que se haya ingresado un dato char que sea una letra
 *
 * \param una cadena de caracteres
 *
 * \return entero si es 1 es texto
 *
 */

int esTexto(char []);





#endif // FUNCIONES_H_INCLUDED
