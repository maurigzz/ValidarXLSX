#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <xlnt/xlnt.hpp>
#include <vector>
#include <typeinfo>


using namespace std;
using namespace xlnt;

int cantidadFilasPorArchivo(xlnt::workbook); /* Cuenta la cantidad de filas que hay los archivos mandados por xls. */
bool validarCantidad(int, char *[]); /* Funcion que permite verificar la cantidad correcta de argumentos */


#endif // FUNCIONES_H_INCLUDED
