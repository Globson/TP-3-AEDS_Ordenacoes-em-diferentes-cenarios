#include "../Headers/ItemMatriz.h"

void IniciarItem(TipoItemMatriz *item){
    ListaVazia(&item->lista);
    item->voos = 0;
    strcpy(item->ult_hora, "\0");
}

/* Operação de Acesso do Item 'NumVoo' */
int getVoos(TipoItemMatriz x){
    return x.voos;
}

/* Operação de Alteração do Item 'Numero de Voos' */
void setVoos(TipoItemMatriz* item, int voo){
    item->voos = voo;
}

/* Operação de Acesso do Item 'Ultima Hora' */
char* getUlt_Hora(TipoItemMatriz* x){
    return x->ult_hora;
}

/* Operação de Alteração do Item 'Ultima Hora' */
void setUlt_Hora(TipoItemMatriz* item, char *hora){
    strcpy(item->ult_hora, hora);
}
