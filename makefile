all: Main.c Sources/ItemMatriz.c Sources/ListaDeVoos.c Sources/TipoVetor.c Sources/TipoVoo.c Sources/MatrizVoos.c
	gcc Main.c -o EXEC_GCC Sources/ItemMatriz.c Sources/ListaDeVoos.c Sources/TipoVetor.c Sources/TipoVoo.c Sources/MatrizVoos.c

clang: Main.c Sources/ItemMatriz.c Sources/ListaDeVoos.c Sources/TipoVetor.c Sources/TipoVoo.c Sources/MatrizVoos.c
	clang Main.c -o EXEC_CLANG Sources/ItemMatriz.c Sources/ListaDeVoos.c Sources/TipoVetor.c Sources/TipoVoo.c Sources/MatrizVoos.c

run_gcc:
	./EXEC_GCC

run_clang:
	./EXEC_CLANG

rm:
	rm EXEC*
