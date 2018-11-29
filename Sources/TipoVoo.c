//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include "../Headers/TipoVoo.h"

void IniciarVoo(TipoVoo *Voo){
    Voo->Id = rand()%10000;
    strcpy(Voo->Hr_dec, "\0");
    strcpy(Voo->Hr_pouso, "\0");
    strcpy(Voo->aeroporto_dec, "\0");
    strcpy(Voo->aeroporto_pouso, "\0");
    Voo->Id_Pista = 0;
}

/* Operação de Acesso do Item 'Id' */
int getId(TipoVoo x){
    return (x.Id);
}

/* Operação de Alteração do Item 'Id' */
void setId(TipoVoo* x, int novoid){
    x->Id = novoid;
}

/* Operação de Acesso do Item 'Horario de Decolagem' */
char* getHr_dec (TipoVoo x){
    return x.Hr_dec;
}

/* Operação de Alteração do Item 'Horario de Decolagem' */
void setHr_dec(TipoVoo* x, char *Hr){
    strcpy(x->Hr_dec, Hr);
}

/* Operação de Acesso do Item 'Horario de Pouso' */
char* getHr_pouso(TipoVoo x){
    return x.Hr_pouso;
}

/* Operação de Alteração do Item 'Horario de Pouso' */
void setHr_pouso(TipoVoo* x, char *Hr){
    strcpy(x->Hr_pouso, Hr);
}

/* Operação de Acesso do Item 'Aeroporto de Decolagem' */
char* getAreroporto_dec(TipoVoo x){
    return x.aeroporto_dec;
}

/* Operação de Alteração do Item 'Aeroporto de Decolagem' */
void setAeroporto_dec(TipoVoo* x, char *Aero){
    strcpy(x->aeroporto_dec, Aero);
}

/* Operação de Acesso do Item 'Aeroporto de Pouso' */
char* getAeroporto_pouso(TipoVoo x){
    return x.aeroporto_pouso;
}

/* Operação de Alteração do Item 'Aeroporto de Pouso' */
void setAeroporto_pouso(TipoVoo* x, char *Aero){
    strcpy(x->aeroporto_pouso, Aero);
}

/* Operação de Acesso do Item 'Id Pista'*/
int getId_pista(TipoVoo x){
    return x.Id_Pista;
}

/*Operação de Alteração do Item 'Id Pista'*/
void setId_pista(TipoVoo* x, char novoid){
    x->Id_Pista = novoid;
}
