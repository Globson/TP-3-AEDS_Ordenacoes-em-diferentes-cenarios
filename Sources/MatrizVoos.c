//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include "../Headers/MatrizVoos.h"

/* Função que Inicia a Matriz com base na Função de Inicialização dos dados do Item da Matriz */
void IniciarMatriz(TipoMatriz *matriz){
    int i,j;
    matriz->idMatriz = (rand()%365);

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            IniciarItem(&matriz->Matriz_Voos[i][j]);
        }
    }
}

/* Função para localizar o local da matriz com base na conversão do char da hora de entrada em int */
int Conversao(char *horario){
    if(strlen(horario) == 5){
      int num = ((horario[0] - '0')*10) + (horario[1] - '0');
      return num;
    } else{
      int num = horario[0] - '0';
      return num;
    }

}

/* Função para Inserir novos dados no item determinado da Matriz */
void Inserir(TipoVoo voo, TipoMatriz *matriz){
    InsereVoo(voo, &matriz->Matriz_Voos[Conversao(voo.Hr_dec)][Conversao(voo.Hr_pouso)].lista);
    matriz->Matriz_Voos[Conversao(voo.Hr_dec)][Conversao(voo.Hr_pouso)].voos++;
    strcpy(matriz->Matriz_Voos[Conversao(voo.Hr_dec)][Conversao(voo.Hr_pouso)].ult_hora, __TIME__);
    matriz->Matriz_Voos[Conversao(voo.Hr_dec)][Conversao(voo.Hr_pouso)].ult_hora[5] = '\0';
}

/* Função para Retirar dados no item determinado da Matriz */
void Retirar(int id, TipoMatriz *matriz, TipoVoo *voo){
    int i, j;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(ProcuraVoo(id, &matriz->Matriz_Voos[i][j].lista, voo) == 0){
                RetiraVoo(id, &matriz->Matriz_Voos[i][j].lista, voo);
                matriz->Matriz_Voos[i][j].voos--;
                strcpy(matriz->Matriz_Voos[Conversao(voo->Hr_dec)][Conversao(voo->Hr_pouso)].ult_hora, __TIME__);
                matriz->Matriz_Voos[Conversao(voo->Hr_dec)][Conversao(voo->Hr_pouso)].ult_hora[5] = '\0';
            }
        }
    }
    matriz->Matriz_Voos[Conversao(voo->Hr_dec)][Conversao(voo->Hr_pouso)].voos--;
}

void Localizar(int id, TipoMatriz *matriz, TipoVoo *voo){
    int i,j, loc=0;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(ProcuraVoo(id, &matriz->Matriz_Voos[i][j].lista, voo) == 0){
                printf("------------ INFO ------------\n");
                printf("         VOO ENCONTRADO!\n");
                printf("------------------------------\n");
            }
        }
    }
}

/* Função para Imprimir os Dados dos Voos da Matriz, nas posições inseridas pelo usuario */
void Imprime_inicial_final(char *inicial, char *final, TipoMatriz matriz){
    Imprime(matriz.Matriz_Voos[Conversao(inicial)][Conversao(final)].lista);
    printf("Ultima Atualização: %s", matriz.Matriz_Voos[Conversao(inicial)][Conversao(final)].ult_hora);
}

/* Função para Imprimir os Dados de um Voo a partir da hora de decolagem recebida */
void Imprime_inicial(char *inicial, TipoMatriz matriz, TipoVoo *voo){
    int i,j;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(i == Conversao(inicial)){
                ProcuraVooHor(inicial, &matriz.Matriz_Voos[i][j].lista, voo);
            }
        }
    }
}

/* Função para Imprimir os Dados de um Voo a partir da hora de pouso recebida */
void Imprime_final(char *final, TipoMatriz matriz, TipoVoo *voo){
    int i,j;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(j == Conversao(final)){
                ProcuraVooHorFinal(final, &matriz.Matriz_Voos[i][j].lista, voo);
            }
        }
    }
}

/* Função para Imprimir todos os Dados da Matriz, em Todas as posições */
void Imprime_geral(TipoMatriz matriz){
    int i,j;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            printf(" --------- FAIXA %d X %d ----------\n", i, j);
            Imprime(matriz.Matriz_Voos[i][j].lista);
            printf("Ultima Atualização: %s\n\n", matriz.Matriz_Voos[i][j].ult_hora);
        }
    }
}

/* Imprimir em qual(is) Faixa(s) de Voo com Maior número de voos cadastrados */
void MaiorNumero(TipoMatriz matriz){
    int Aux, i, j;
    Aux = 0;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(matriz.Matriz_Voos[i][j].voos >= Aux){
                Aux = matriz.Matriz_Voos[i][j].voos;
            }
        }
    }

    printf("\n -------------- INFO --------------\n");
    printf("MAIOR NUMERO: %d\n", Aux);
    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if (matriz.Matriz_Voos[i][j].voos == Aux){
                printf("POSICAO: [%d] x [%d]\n", i, j);
            }
        }
    }
    printf(" ----------------------------------\n");
}

/* Imprimir em qual(is) Faixa(s) de Voo com Menor número de voos cadastrados */
void MenorNumero(TipoMatriz matriz){
    int Aux, i, j;
    Aux = 0;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(matriz.Matriz_Voos[i][j].voos <= Aux){
                Aux = matriz.Matriz_Voos[i][j].voos;
            }
        }
    }

    printf("\n -------------- INFO --------------\n");
    printf("MENOR NUMERO: %d\n", Aux);
    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if (matriz.Matriz_Voos[i][j].voos == Aux){
                printf("POSICAO: [%d] x [%d]\n", i, j);
            }
        }
    }
    printf(" ----------------------------------\n");
}

/* Imprimir em qual(is) Faixa(s) de Voo foram alteradas mais recentemente */
void MaisRecente(TipoMatriz matriz){
    int i, j;
    char Aux[10];
    strcpy(Aux, "00:00");

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(strcmp(matriz.Matriz_Voos[i][j].ult_hora, Aux) >= 0){
                strcpy(Aux, matriz.Matriz_Voos[i][j].ult_hora);
            }
        }
    }

    printf("\n -------------- INFO --------------\n");
    printf("MAIS RECENTE: %s\n", Aux);
    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if (strcmp(matriz.Matriz_Voos[i][j].ult_hora, Aux) == 0){
                printf("POSICAO: [%d] x [%d]\n", i, j);
            }
        }
    }
    printf(" ----------------------------------\n");
}

/* Imprimir em qual(is) Faixa(s) de Voo foram alteradas menos recentemente */
void MenosRecente(TipoMatriz matriz){
    int i, j;
    char Aux[10];
    strcpy(Aux, "\0");

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(strcmp(matriz.Matriz_Voos[i][j].ult_hora, Aux) <= 0){
                strcpy(Aux, matriz.Matriz_Voos[i][j].ult_hora);
            }
        }
    }

    printf("\n -------------- INFO --------------\n");
    printf("MENOS RECENTE: %s\n", Aux);
    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if (strcmp(matriz.Matriz_Voos[i][j].ult_hora, Aux) == 0){
                printf("POSICAO: [%d] x [%d]\n", i, j);
            }
        }
    }
    printf(" ----------------------------------\n");
}

/* Verificando se o número de posições da matriz sem voos cadastrados é, no mínimo, o
   dobro daquelas com pelo menos 1 voo cadastrado */
void Espaca(TipoMatriz matriz){
    int i, j, Aux, Aux1;
    Aux = 0;
    Aux1 = 0;

    for(i=0; i<24; i++){
        for(j=0; j<24; j++){
            if(matriz.Matriz_Voos[i][j].voos >= 1){
                Aux1++;
            } else{
                Aux++;
            }
        }
    }

    printf("\n -------------- INFO --------------\n");
    if(Aux >= 2*Aux1){
        printf("TEMOS MAIS FAIXAS SEM VOOS!\n");
    } else{
        printf("TEMOS MENOS FAIXAS SEM VOOS!\n");
    }
    printf(" ----------------------------------\n");
}
