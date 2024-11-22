/*********************************************************************************************\
 * Programación 1. Práctica 6
 * Autores: Miguel Ángel Latre
 * Modificado por: ¡¡¡PON AQUÍ TU NOMBRE!!!
 * Última revisión: ¡¡¡!!!
 * Resumen: Fichero de interfaz «parada-programada.hpp» de un módulo para trabajar con
 *          registros que representan paradas programadas de trenes en una estación.
\*********************************************************************************************/

#pragma once

#include <istream>
#include <string>
using namespace std;


struct ParadaProgramada {
    // Define los campos necesarios para representar los siguientes datos de una parada
    // programada de un tren en una estación: el código de la estación, la hora de llegada y la
    // hora de salida.
};


/*
 * Pre:  El flujo «f» está asociado con un fichero de texto con el formato establecido por la
 *       regla <paradas-programadas> del enunciado y en disposición de leer desde el
 *       principio de una línea distinta a la de la cabecera.
 * Post: Intenta leer la línea mencionada en la precondición y, si no se terminan los datos del
 *       fichero en dicho intento, almacena en los campos adecuados del parámetro «parada» el
 *       código de la estación, la hora de llegada y la hora de salida que aparecen reflejadas
 *       en la línea leída.
 *       Devuelve «true» si no se han terminado los datos del fichero en el intento de lectura´
 *       y «false» en caso contrario.
 */
bool leerParadaProgramada(istream &f, ParadaProgramada &parada);


/*
 * Pre:  La cadena de caracteres «rutaFichero» representa la ruta de acceso y el nombre de un
 *       fichero de texto con el formato establecido por la regla <paradas-programadas> del
 *       enunciado. El vector «paradasProgramadasPorHora» tiene exactamente 24 componentes.
 * Post: Si el fichero de nombre «rutaFichero» se puede abrir y leer correctamente, asigna a
 *       «lecturaOk» el valor «true»; a «numParadas», el número de paradas programadas en la
 *       estación de código «codEstacion» según el contendio del fichero de nombre
 *       «rutaFichero» y a cada componente «paradasProgramadasPorHora[i]», el número de paradas
 *       programadas en la estación de código «codEstacion» con salidas comprendidas entre las
 *       i:00 y las i:59. En caso contrario, asigna a «lecturaOk» el valor «false».
 */
void contarParadasProgramadas(const string rutaFichero, const unsigned codEstacion, 
                              unsigned &numParadas, unsigned paradasProgramadasPorHora[],
                              bool &lecturaOk);
