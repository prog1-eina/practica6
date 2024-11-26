################################################################################
## Fichero «Makefile» para los programas de la práctica 6:
## «datos-pruebas», «contar-paradas» y «paradas-por-estacion»
################################################################################

datos-pruebas:           src/1-datos-pruebas.cpp src/pedir-directorio.hpp | bin test-dirs
	g++ -g -Wall -Wextra src/1-datos-pruebas.cpp -o bin/datos-pruebas

contar-paradas: build/2-contar-paradas.o build/parada-programada.o build/estacion.o build/pedir-directorio.o | bin
	g++ -g      build/2-contar-paradas.o build/parada-programada.o build/estacion.o build/pedir-directorio.o -o bin/contar-paradas

paradas-por-estacion: 
	@echo Tienes que escribir las reglas para compilar el programa usos-por-usuario

build/2-contar-paradas.o:   src/2-contar-paradas.cpp src/parada-programada.hpp src/estacion.hpp src/pedir-directorio.hpp | build
	g++ -g -Wall -Wextra -c src/2-contar-paradas.cpp -o build/2-contar-paradas.o 

build/pedir-directorio.o:   src/pedir-directorio.cpp src/pedir-directorio.hpp | build
	g++ -g -Wall -Wextra -c src/pedir-directorio.cpp -o build/pedir-directorio.o 

build/parada-programada.o:  src/parada-programada.cpp src/parada-programada.hpp | build
	g++ -g -Wall -Wextra -c src/parada-programada.cpp -o build/parada-programada.o 

build/estacion.o:           src/estacion.cpp src/parada-programada.hpp src/estacion.hpp src/pedir-directorio.hpp | build
	g++ -g -Wall -Wextra -c src/estacion.cpp -o build/estacion.o 

bin:
	mkdir bin

build:
	mkdir build

test-dirs:
ifeq ($(OS),Windows_NT)
	if not exist data\test-10 mkdir data\test-10
	if not exist data\test-200 mkdir data\test-200
else
	mkdir -p data/test-10
	mkdir -p data/test-200
endif

clean:
ifeq ($(OS),Windows_NT)
	if exist bin rmdir /S /Q bin
	if exist build rmdir /S /Q build
else
	rm -f build/* bin/*
endif
