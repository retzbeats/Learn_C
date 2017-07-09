CFLAGS=-Wall	-g
all:	ex1	ex3
#para construir/borrar varios archivos se separan por espacio
	@echo Building executables!! #echo es para mostrar mensaje en consola el @ indica que no debe mostrar la palabra echo
clean:
	rm	-f ex1	ex3
	@echo Executables destroyed!!!