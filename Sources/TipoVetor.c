#include "../Headers/TipoVetor.h"

void BubbleSort (TipoMatriz *Matriz, int TamanhoVetor){
  int i,j;
  TipoMatriz aux;

  for(i=0; i<TamanhoVetor-1; i++){
    for(j=1;j<TamanhoVetor-i;j++){
      if(Matriz[j].idMatriz < Matriz[j-1].idMatriz){
        aux = Matriz[j];
        Matriz[j] = Matriz[j-1];
        Matriz[j-1] = aux;
      }
    }
  }
}

void SelectSort (TipoMatriz *Matriz, int TamanhoVetor){
  int i,j,min;
  TipoMatriz aux;

  for(i=0; i< TamanhoVetor-1; i++){
    min = i;
    for(j=(i+1); j<TamanhoVetor; j++){
      if(Matriz[j].idMatriz < Matriz[min].idMatriz){
        min=j;}
      aux = Matriz[min];
      Matriz[min] = Matriz[i];
      Matriz[i] = aux;
    }
  }
}

void InsertSort (TipoMatriz *Matriz, int TamanhoVetor){
  int i,j;
  TipoMatriz aux;

  for(i=1; i<TamanhoVetor; i++){
    aux = Matriz[i];
    j = i-1;

    while((j>=0) && (aux.idMatriz < Matriz[j].idMatriz)){
      Matriz[j+1] = Matriz[j];
      j--;}
    Matriz[j+1] = aux;
  }
}

void ShellSort (TipoMatriz *Matriz, int TamanhoVetor){
  int i,j,h=1;
  TipoMatriz aux;

  do h = h*3+1;while(h < TamanhoVetor);

  do{
    h= h/3;
    for(i=h; i<TamanhoVetor; i++){
      aux = Matriz[i];
      j = i;

      while(Matriz[j - h].idMatriz > aux.idMatriz){
        Matriz[j] = Matriz[j-h];
        j -= h;
        if(j<h)break;
      }
      Matriz[j] = aux;
    }
  } while(h != 1);
}

void Particao(int esq,int dir,int* i, int* j, TipoMatriz *a){
  TipoMatriz pivo,aux;
  *i=esq;
  *j=dir;
  pivo=a[(*i+*j)/2];
  do{
    while (pivo.idMatriz > a[*i].idMatriz) (*i)++;
    while (pivo.idMatriz < a[*j].idMatriz) (*j)--;
    if(*i<=*j){
      aux=a[*i];
      a[*i]=a[*j];
      a[*j]=aux;
      (*i)++;
      (*j)--;
    }
  }while(*i<*j);
}

void Ordena(int e, int d, TipoMatriz *A){
  int i,j;
  Particao(e,d,&i,&j,A);
  if(e<j) Ordena(e,j,A);
  if(i<d) Ordena(i,d,A);

}

void QuickSort (TipoMatriz *Matriz, int TamanhoVetor){
  Ordena(0, TamanhoVetor-1, Matriz);
}

void HeapSort (TipoMatriz *Matriz, int TamanhoVetor){

}
