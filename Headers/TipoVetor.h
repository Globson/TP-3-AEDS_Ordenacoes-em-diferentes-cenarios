#include "../Headers/MatrizVoos.h"

typedef struct{
  TipoMatriz* ListaIdMatriz;
}TipoVetor;

void AlocaVetor(TipoVetor* vetor, unsigned int TamanhoVetor);

//Chamada dos algoritmos de ordenação
void BubbleSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);
void SelectSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);
void InsertSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);
void ShellSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);

//Chamada de funções para ordenação pelo algoritmo do QuickSort
void Particao (int esq,int dir,int* i, int* j, TipoVetor *a, int *Compara, int *Movimenta);
void Ordena (int e, int d, TipoVetor *A, int *Compara, int *Movimenta);
void QuickSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);


void HeapSort (TipoVetor *Vetor, int TamanhoVetor, int *Compara, int *Movimenta);
