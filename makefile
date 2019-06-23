#Variables

CXX = g++
CXXFLAGS = -std=c++14

FUENTE = validando.cpp
CABECERA = funciones.cpp
NOMBRE = validar
XLSX = -c ArchivosXLSX/Cursos.xlsx -d ArchivosXLSX/Docentes.xlsx -s ArchivosXLSX/Salas.xlsx

LIB = -Ixlnt/include -lxlnt


#Reglas


tarea: validando.cpp
	$(CXX) $(FUENTE) $(CABECERA) -o $(NOMBRE) $(CXXFLAGS) $(LIB)
	clear
	./$(NOMBRE) $(XLSX)

ejecutar:
	clear
	./$(NOMBRE) $(XLSX)

clean:
	rm -fr *.o a.out $(NOMBRE)
