/*********************************************************************************************\
 * Programación 1. Práctica 6
 * Autor: Miguel Ángel Latre Abadía
 * Última revisión: 22 de noviembre de 2024
 * Resumen: Fichero de interfaz «pedir-directorio.hpp» de un módulo que declara un
 *          procedimiento denominado «pedirDirectorio» que facilita la labor de convertir el
 *          nombre de la carpeta que contiene los datos con los que se va a trabajar en dos
 *          rutas de acceso a los ficheros "stop_times.txt" y "stops.txt" relativas al
 *          directorio de ejecución del proyecto.
\*********************************************************************************************/

#pragma once

#include <string>
using namespace std;

const string RUTA_DATOS = "data/";
const string NOM_FICH_PARADAS = "/stop_times.txt";
const string NOM_FICH_ESTACIONES = "/stops.txt";

/*
 * Pre:  ---
 * Post: Solicita al usuario el nombre de un directorio que contiene los datos en formato GTFS
 *       con los que quiere trabajar el usuario, lo lee de teclado y asigna a «nomFichParadas»
 *       una ruta de acceso relativa al fichero "stop_times.txt" del subdirectorio elegido por
 *       el usuario del directorio "data" y a «nomFichEstaciones» una ruta relativa similar
 *       para el fichero "stops.txt".
 * 
 *       Por ejemplo, si el usuario escribe "ave", «nomFichParadas» tendrá el valor
 *       "data/ave/stop_times.txt" y «nomFichEstaciones», "data/ave/stops.txt".
 */
void pedirDirectorio(string &nomFichParadas, string &nomFichEstaciones);
