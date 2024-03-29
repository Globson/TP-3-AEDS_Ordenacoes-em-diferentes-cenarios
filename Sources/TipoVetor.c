#include "../Headers/TipoVetor.h"

void AlocaVetor(TipoVetor* vetor, unsigned int TamanhoVetor){     //Funcao para alocacao dinamica de memoria para vetores principais//
  vetor->ListaIdMatriz = (TipoMatriz*) malloc (TamanhoVetor*sizeof(TipoMatriz));
}

void DesalocaVetor(TipoVetor* vetor){  //Funcao para liberar memorias dinamicamente alocadas//
  free(vetor->ListaIdMatriz);
}

void BubbleSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){  //BubbleSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  int i,j;
  TipoMatriz aux;

  for(i=0; i < TamanhoVetor-1; i++){
    for(j=1; j < TamanhoVetor-i; j++){
      *Compara = *Compara+1;

      if(Vetor->ListaIdMatriz[j].idMatriz < Vetor->ListaIdMatriz[j-1].idMatriz){
        aux = Vetor->ListaIdMatriz[j];
        Vetor->ListaIdMatriz[j] = Vetor->ListaIdMatriz[j-1];
        Vetor->ListaIdMatriz[j-1] = aux;
        *Movimenta = *Movimenta+1;
      }
    }
  }
}

void SelectSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){ //SelectSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  int i,j,min;
  TipoMatriz aux;

  for(i=0; i < TamanhoVetor-1; i++){
    min = i;
    for(j = (i+1); j < TamanhoVetor; j++){
      *Compara = *Compara+1;
      if(Vetor->ListaIdMatriz[j].idMatriz < Vetor->ListaIdMatriz[min].idMatriz){
        min = j;
        *Movimenta = *Movimenta+1; //Movimentacao com elemento diferente de si proprio so ocorre quando entra-se no if//
      }
      aux = Vetor->ListaIdMatriz[min];
      Vetor->ListaIdMatriz[min] = Vetor->ListaIdMatriz[i];
      Vetor->ListaIdMatriz[i] = aux;
    }
  }
}

void InsertSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){  //InsertSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  int i,j;
  TipoMatriz aux;

  for(i=1; i<TamanhoVetor; i++){
    aux = Vetor->ListaIdMatriz[i];
    j = i-1;
    *Compara = *Compara+2;

    while((j>=0) && (aux.idMatriz < Vetor->ListaIdMatriz[j].idMatriz)){ //2 comparacoes dentro do parametro do while//
      Vetor->ListaIdMatriz[j+1] = Vetor->ListaIdMatriz[j];
      j--;
      *Movimenta = *Movimenta+1; //Todas as movimentacoes do insertion//
      *Compara = *Compara+2;}
      Vetor->ListaIdMatriz[j+1] = aux;

  }
}

void ShellSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){  ////ShellSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  int i,j,h=1;
  TipoMatriz aux;

  do h = h*3+1;while(h < TamanhoVetor);

  do{
    h= h/3;
    for(i=h; i<TamanhoVetor; i++){
      aux = Vetor->ListaIdMatriz[i];
      j = i;
      *Compara = *Compara+1;

      while(Vetor->ListaIdMatriz[j - h].idMatriz > aux.idMatriz){
        Vetor->ListaIdMatriz[j] = Vetor->ListaIdMatriz[j-h];
        j -= h;
        *Movimenta = *Movimenta+1;
        *Compara = *Compara+2;
        if(j<h)break;
      }
      Vetor->ListaIdMatriz[j] = aux;
    }
  } while(h != 1);
}

void Particao (int esq,int dir,int* i, int* j, TipoVetor *a, long int *Compara, long int *Movimenta){ //Funcao pertencente a Quicksort//
  TipoMatriz pivo,aux;
  *i=esq;
  *j=dir;
  pivo = a->ListaIdMatriz[(*i+*j)/2];
  do{
    *Compara = *Compara+1;
    while (pivo.idMatriz > a->ListaIdMatriz[*i].idMatriz){
      (*i)++;
      *Compara = *Compara+1;
    }
    *Compara = *Compara+1;
    while (pivo.idMatriz < a->ListaIdMatriz[*j].idMatriz){
      (*j)--;
      *Compara = *Compara+1;
    }
    *Compara = *Compara+1;
    if(*i<=*j){
      aux = a->ListaIdMatriz[*i];
      a->ListaIdMatriz[*i] = a->ListaIdMatriz[*j];
      a->ListaIdMatriz[*j] = aux;
      (*i)++;
      (*j)--;
      *Movimenta = *Movimenta+1;
    }
  }while(*i<*j);
}

void Ordena (int e, int d, TipoVetor *A, long int *Compara, long int *Movimenta){  //Funcao pertencente a Quicksort//
  int i,j;
  Particao(e,d,&i,&j,A, Compara, Movimenta);
  *Compara = *Compara+1;
  if(e<j) Ordena(e,j,A, Compara, Movimenta);
  *Compara = *Compara+1;
  if(i<d) Ordena(i,d,A, Compara, Movimenta);

}

void QuickSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){  //QuickSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  Ordena(0, TamanhoVetor-1, Vetor, Compara, Movimenta);
}

void HeapSort (TipoVetor *Vetor, int TamanhoVetor, long int *Compara, long int *Movimenta){  //HeapSort adaptado para vetor de matrizes e com contadores de comparacoes e movimentacoes//
  int i = TamanhoVetor/2;
  int pai, filho;

  TipoMatriz t;

  while(1){
    if(i > 0){
      i--;
      t = Vetor->ListaIdMatriz[i];
    } else{
      TamanhoVetor--;

      if(TamanhoVetor == 0) return;
      t = Vetor->ListaIdMatriz[TamanhoVetor];
      Vetor->ListaIdMatriz[TamanhoVetor] = Vetor->ListaIdMatriz[0];
    }

    pai = i;
    filho = i*2 + 1;

    while(filho < TamanhoVetor){
      *Compara = *Compara+1;
      if((filho+1 < TamanhoVetor) && (Vetor->ListaIdMatriz[filho+1].idMatriz > Vetor->ListaIdMatriz[filho].idMatriz))
        filho++;

      if(Vetor->ListaIdMatriz[filho].idMatriz > t.idMatriz){
        *Movimenta = *Movimenta+1;
        Vetor->ListaIdMatriz[pai] = Vetor->ListaIdMatriz[filho];
        pai = filho;
        filho = pai*2 + 1;
      } else{
        break;
      }
    }

    Vetor->ListaIdMatriz[pai] = t;
  }
}
