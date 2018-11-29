//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include "../Headers/ListaDeVoos.h"
#ifndef ITEMMATRIZ_H
#define ITEMMATIZ_H

/* Estrutura para TAD Item Matriz, com os dados necessários para a estrutura */
typedef struct {
    int id;
    TipoLista lista;
    int voos;
    char ult_hora[10];
} TipoItemMatriz;

/* Implementação da Inicialização da Estrutura do Item Matriz*/
void IniciarItem(TipoItemMatriz *item);

/* Funcções de Alteração e Acesso aos dados do Item Matriz */
int getVoos(TipoItemMatriz x);
void setVoos(TipoItemMatriz* item, int voo);
char* getUlt_Hora(TipoItemMatriz x);
void setUlt_Hora(TipoItemMatriz* item, char *hora);
#endif
