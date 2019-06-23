#include "funciones.h"

/* Cuenta la cantidad de filas que hay los archivos mandados por xls. */
int cantidadFilasPorArchivo(workbook archivo){
        auto sheetArchivo = archivo.active_sheet(); //trabajando con la 1° pestaña del archivo

        int contadorFilas = 0;
        for (auto row : sheetArchivo.rows(false)) //seudoForEach que recorrelas filas.
        {
            contadorFilas++;
        }

        cout << "Cantidad de filas:" << contadorFilas << endl << endl;
}


/* Funcion que permite verificar la cantidad correcta de argumentos */
bool validarCantidad(int argc, char *argv[]){

  if (argc-1 != 6){
      return false;
  }

  else{
      return true;
  }

}
