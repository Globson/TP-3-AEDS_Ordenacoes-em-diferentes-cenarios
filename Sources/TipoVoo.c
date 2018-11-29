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
void LetraAleatoria(int n, char *l){ // entrar com numero de 0 ate 1053.// bjus do samuca
  if((0<=n) && (n<=39)) strcpy(l,"A");
  else if((39<n) && (n<=78)) strcpy(l,"B");
  else if((78<n) && (n<=117)) strcpy(l,"C");
  else if((117<n) && (n<=156)) strcpy(l,"D");
  else if((156<n) && (n<=195)) strcpy(l,"E");
  else if((195<n) && (n<=234)) strcpy(l,"F");
  else if((234<n) && (n<=273)) strcpy(l,"G");
  else if((273<n) && (n<=312)) strcpy(l,"H");
  else if((312<n) && (n<=351)) strcpy(l,"I");
  else if((351<n) && (n<=390)) strcpy(l,"J");
  else if((390<n) && (n<=429)) strcpy(l,"K");
  else if((429<n) && (n<=468)) strcpy(l,"L");
  else if((468<n) && (n<=507)) strcpy(l,"M");
  else if((507<n) && (n<=546)) strcpy(l,"N");
  else if((546<n) && (n<=585)) strcpy(l,"O");
  else if((585<n) && (n<=624)) strcpy(l,"P");
  else if((624<n) && (n<=663)) strcpy(l,"Q");
  else if((663<n) && (n<=702)) strcpy(l,"R");
  else if((702<n) && (n<=741)) strcpy(l,"S");
  else if((741<n) && (n<=780)) strcpy(l,"T");
  else if((780<n) && (n<=819)) strcpy(l,"U");
  else if((819<n) && (n<=858)) strcpy(l,"V");
  else if((858<n) && (n<=936)) strcpy(l,"W");
  else if((936<n) && (n<=975)) strcpy(l,"X");
  else if((975<n) && (n<=1014)) strcpy(l,"Y");
  else strcpy(l,"Z");
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
