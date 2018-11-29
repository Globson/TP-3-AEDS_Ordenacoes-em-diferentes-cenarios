//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include "../Headers/ListaDeVoos.h"

/* Inicialização da Lista, criando uma lista vazia*/
void ListaVazia(TipoLista *Lista){
    Lista->Primeiro = (TipoApontador) malloc(sizeof(TipoCelula));
    Lista->Ultimo = Lista->Primeiro;
    Lista->Ultimo->Prox = NULL;
}

/* Inserção dos Itens na Lista Encadeada de Forma Ordenada */
void InsereVoo(TipoVoo x, TipoLista *Lista){
    TipoCelula *p, *q, *nova;

    nova = (TipoApontador) malloc(sizeof(TipoCelula));
    nova->Voo = x;

    p = Lista->Primeiro;
    q = Lista->Primeiro->Prox;

    while (q != NULL){
        if(strcmp(q->Voo.Hr_dec, x.Hr_dec) >= 0){
            break;
        }
        p = q;
        q = q->Prox;
    }

    nova->Prox = q;
    p->Prox = nova;
}

/* Remover Voo da Lista através do Id do Voo */
void RetiraVoo(int id, TipoLista* Lista, TipoVoo* Voo){
    TipoCelula *Aux, *Aux1;
    Aux = Lista->Primeiro;
    Aux1 = Lista->Primeiro->Prox;

    while (Aux1 != NULL && Aux1->Voo.Id != id){
        Aux = Aux1;
        Aux1 = Aux1->Prox;
    }

    if(Aux1 != NULL){
        Aux->Prox = Aux1->Prox;
        free(Aux1);
    }
}

/* Implementação semelhante à 'RetiraVoo', porém apenas retornando o valor à utilização,
   sem remoção da Lista */
int ProcuraVoo(int id, TipoLista *Lista, TipoVoo *Voo){
    TipoCelula *Aux, *Aux1;
    Aux = Lista->Primeiro;
    Aux1 = Lista->Primeiro->Prox;

    while (Aux1 != NULL && Aux1->Voo.Id != id){
        Aux = Aux1;
        Aux1 = Aux1->Prox;
    }

    if(Aux1 != NULL){
        return 0;
    } else{
        return 1;
    }
}

/* Função que Imprime os dados de um Voo especifico com base na hora inicial recebida */
void ProcuraVooHor(char *hora, TipoLista *Lista, TipoVoo *Voo){
    TipoCelula *Aux, *Aux1;
    Aux = Lista->Primeiro;
    Aux1 = Lista->Primeiro->Prox;

    while ((strcmp(Aux->Voo.Hr_dec, hora) == 0) && Aux != NULL){
        Aux = Aux1;
        Aux1 = Aux1->Prox;
    }

    if(Aux1 != NULL){
        printf("\n -------------- INFO --------------\n");
        printf("Id Voo: %d\n", Aux1->Voo.Id);
        printf("Hora de Decolagem: %s\n", Aux1->Voo.Hr_dec);
        printf("Hora de Pouso Prevista: %s\n", Aux1->Voo.Hr_pouso);
        printf("Aeroporto Decolagem: %s\n", Aux1->Voo.aeroporto_dec);
        printf("Aeroporto Pouso: %s\n", Aux1->Voo.aeroporto_pouso);
        printf("Id Pista de Pouso: %d\n", Aux1->Voo.Id_Pista);
        printf(" ----------------------------------\n");
    }
}

/* Função que Imprime os dados de um Voo especifico com base na hora final recebida */
void ProcuraVooHorFinal(char *hora, TipoLista *Lista, TipoVoo *Voo){
    TipoCelula *Aux, *Aux1;
    Aux = Lista->Primeiro;
    Aux1 = Lista->Primeiro->Prox;

    while ((strcmp(Aux->Voo.Hr_pouso, hora) == 0) && Aux != NULL){
        Aux = Aux1;
        Aux1 = Aux1->Prox;
    }

    if(Aux1 != NULL){
        printf("\n -------------- INFO --------------\n");
        printf("Id Voo: %d\n", Aux1->Voo.Id);
        printf("Hora de Decolagem: %s\n", Aux1->Voo.Hr_dec);
        printf("Hora de Pouso Prevista: %s\n", Aux1->Voo.Hr_pouso);
        printf("Aeroporto Decolagem: %s\n", Aux1->Voo.aeroporto_dec);
        printf("Aeroporto Pouso: %s\n", Aux1->Voo.aeroporto_pouso);
        printf("Id Pista de Pouso: %d\n", Aux1->Voo.Id_Pista);
        printf(" ----------------------------------\n");
    }
}

/* Função que Imprime os Dados da Lista */
void Imprime(TipoLista Lista){
    TipoCelula *Aux;
    Aux = Lista.Primeiro->Prox;

    while (Aux != NULL){
        printf(" -------------- INFO --------------\n");
        printf("Id Voo: %d\n", Aux->Voo.Id);
        printf("Hora de Decolagem: %s\n", Aux->Voo.Hr_dec);
        printf("Hora de Pouso Prevista: %s\n", Aux->Voo.Hr_pouso);
        printf("Aeroporto Decolagem: %s\n", Aux->Voo.aeroporto_dec);
        printf("Aeroporto Pouso: %s\n", Aux->Voo.aeroporto_pouso);
        printf("Id Pista de Pouso: %d\n", Aux->Voo.Id_Pista);
        printf(" ----------------------------------\n");
        Aux = Aux->Prox;
    }
}
