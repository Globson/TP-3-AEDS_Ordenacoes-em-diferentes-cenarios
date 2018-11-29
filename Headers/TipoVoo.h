//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Implementação do TAD Voo, com as características definidas para cada voo*/
typedef struct {
    int Id;
    char Hr_dec[10];
    char Hr_pouso[10];
    char aeroporto_dec[50];
    char aeroporto_pouso[50];
    int Id_Pista;
} TipoVoo;

/* Implementação das operações para acessar e alterar os dados */
/* Implementação da Inicialização da Estrutura de Voo */
void IniciarVoo(TipoVoo *Voo);
void LetraAleatoria(int n, char *l);

/* Funções de Alteração e Acesso aos dados do Voo */
int getId(TipoVoo x);
void setId(TipoVoo* x, int novoid);
char* getHr_dec(TipoVoo x);
void setHr_dec(TipoVoo* x, char *Hr);
char* getHr_pouso(TipoVoo x);
void setHr_pouso(TipoVoo* x, char *Hr);
char* getAreroporto_dec(TipoVoo x);
void setAeroporto_dec(TipoVoo* x, char *Aero);
char* getAeroporto_pouso(TipoVoo x);
void setAeroporto_pouso(TipoVoo* x, char *Aero);
int getId_pista(TipoVoo x);
void setId_pista(TipoVoo* x, char novoid);
