# ValidarXLSX

## Descripción:
En base a tres archivos .xlxs permite validar la cantidad correcta y verificar que de acuerdo al prefijo (-c, -s, -d) cargue los archivos para posteriormente mostrar la cantidad de filas de cada uno.

## Instalación (Ubuntu):
1. Instalar CMake.
```
$ sudo apt-get install cmake
```
2. Instalar Libreria.

```
$ git clone https://github.com/FabianAlvaradoDonoso/xlnt
$ cd xlnt
$ cmake .
$ make -j 2
$ sudo make install
$ sudo ldconfig
```

3. Compilar y Ejecutar con:
```
$ make
```

#### En el caso de errores:

- Si 'Make' no funciona, compilar y ejecutar con:
```
$ g++ validando.cpp -o validar -std=c++14 -xlnt/include -lxlnt
$ ./validar -c ArchivosXLSX/Cursos.xlsx -d ArchivosXLSX/Docentes.xlsx -s ArchivosXLSX/Salas.xlsx
```
- Errores con archivo .so:

	Agregar "/usr/local/lib" al final de /etc/ld.so.conf y luego:
```
$ sudo ldconfig
$ ldconfig -p | grep local
```
