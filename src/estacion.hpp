/*********************************************************************************************\
 * Programación 1. Práctica 6
 * Autores: Miguel Ángel Latre
 * Modificado por: ¡¡¡PON AQUÍ TU NOMBRE!!!
 * Última revisión: ¡¡¡!!!
 * Resumen: Fichero de interfaz «estacion.hpp» de un módulo para trabajar con registros que
 *          almacenan la información disponible sobre estaciones de tren y que permiten
 *          contabilizar el número de paradas programadas en cada estación.
 * Licencia: CC BY-NC-SA 4.0
\*********************************************************************************************/

#pragma once 
#include <string>
using namespace std;

/*
 * Máximo número de estaciones
 */
const int MAX_NUM_ESTACIONES = 1000;


struct Estacion {
    // Define los campos necesarios para representar los siguientes datos de una estación:
    // su código numérico, nombre, latitud, longitud, accesibilidad y número de paradas
    // programadas.
};


/* 
 * Pre:  «nombreFichero» es el nombre de un fichero de texto que sigue el formato de la regla
 *       <estaciones> establecida en el enunciado. Estaciones tiene al menos tantas componentes
 *       como estaciones hay en el fichero «nombreFichero». Los valores de «numEstaciones» y
 *       «lecturaOk» no están definidos.
 * Post: Si el fichero «nombreFichero» existe y puede leerse de él, copia en las primeras
 *       componentes del vector «estaciones» los datos de las estaciones del fichero
 *       «nombreFichero»; asigna a «numEstaciones» el número de estaciones copiadas en el
 *       vector «estaciones» y al parámetro «lecturaOk» el valor «true». Si el fichero
 *       «nombreFichero» no existe, escribe un mensaje de error en «cerr» para informar de ello
 *       al estacion y asigna al parámetro «ok» el valor «false».
 */
void leerEstaciones(const string nombreFichero,
                    Estacion estaciones[], unsigned &numEstaciones, bool &lecturaOk);


/*
 * Pre:  estacion1 = X y estacion2 = Y
 * Post: estacion1 = Y y estacion2 = X
 */
void intercambiar(Estacion &estacion1, Estacion &estacion2);


/*
 * Pre:  ---
 * Post: Escribe una línea en la pantalla que contiene la siguiente información del registro
 *       «estacion»: número de paradas programadas, código y nombre de la estación, escrita en
 *       ese orden y utilizando un mínimo de 10 caracteres para los datos del número de paradas
 *       programadas y del código.
 */
void mostrar(const Estacion estacion);


/* 
 * Pre:  «nombreFichero» es el nombre de un fichero de texto que sigue el formato de la regla
 *       <estaciones> establecida en el enunciado. Los valores de «estacion», «encontrado» y
 *       «lecturaOk» no están definidos.
 * Post: Si el fichero «nombreFichero» existe y puede leerse de él, asigna a «lecturaOk» el
 *       valor «true». Si, además, hay información en el fichero sobre una estación de código
 *       «codEstacion», asigna a «estacion» los datos de esa estación y a «encontrado» el valor
 *       «true». Si no hay información sobre una estación de código «codEstacion», asigna a
 *       «encontrado» el valor «false». Si el fichero «nombreFichero» no existe, escribe un
 *       mensaje de error en «cerr» para informar de ello al estacion y asigna al parámetro
 *       «lecturaOk» el valor «false».
 * NOTA: Este procedimiento solo lo vas necesitar si implementas la mejora del proyecto
 *       «2-contar-paradas» sugerida en la tarea 4.
 */
void buscarEstacion(const string nombreFichero, const unsigned codEstacion,
                    Estacion &estacion, bool &encontrado, bool &lecturaOk);
