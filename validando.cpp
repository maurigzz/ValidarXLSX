#include <iostream>
#include <xlnt/xlnt.hpp>
#include <vector>
#include <typeinfo>
#include "funciones.h"

using namespace std;
using namespace xlnt;

int main(int argc, char *argv[])
{
	if (validarCantidad(argc, argv) == true){

		cout << "Cantidad de Argumentos Valida." << endl;

		workbook cursos; //instancia de objeto que aloja el xlsx
		workbook docentes; //instancia de objeto que aloja el xlsx
		workbook salas; //instancia de objeto que aloja el xlsx

		/* Se verifica que el prefijo cumpla con el archivo correspondido */
		for (int i = 1; i < argc; i=i+2){
			char *prefijo = argv[i];

			if(prefijo[1] == 'c'){
				cursos.load(argv[i+1]); //carga del xlsx
			}
			if(prefijo[1] == 'd'){
				docentes.load(argv[i+1]); //carga del xlsx
			}
			if(prefijo[1] == 's'){
				salas.load(argv[i+1]); //carga del xlsx
			}
		}

		cout << " " << endl;
		cantidadFilasPorArchivo(cursos);
		cantidadFilasPorArchivo(docentes);
		cantidadFilasPorArchivo(salas);
	}
	else{
		cout << "Cantidad de Argumentos Invalida." << endl;
	}

	return 0;
}
