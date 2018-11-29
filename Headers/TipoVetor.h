#include "../Headers/MatrizVoos.h"

#ifndef TIPOVETOR_H
#define TIPOVETOR_H

//Chamada dos algoritmos de ordenação
void BubbleSort (TipoMatriz *Matriz, int TamanhoVetor);
void SelectSort (TipoMatriz *Matriz, int TamanhoVetor);
void InsertSort (TipoMatriz *Matriz, int TamanhoVetor);
void ShellSort (TipoMatriz *Matriz, int TamanhoVetor);

//Chamada de funções para ordenação pelo algoritmo do QuickSort
void Particao (int esq,int dir,int* i, int* j, TipoMatriz *a);
void Ordena (int e, int d, TipoMatriz *A);
void QuickSort (TipoMatriz *Matriz, int TamanhoVetor);


void HeapSort (TipoMatriz *Matriz, int TamanhoVetor);
#endif
