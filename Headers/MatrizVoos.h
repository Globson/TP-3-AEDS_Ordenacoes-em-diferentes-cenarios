#include "../Headers/ItemMatriz.h"


/* Estrutura para a TAD Matriz, com os dadosnecessários para a Matriz */
typedef struct {
    int idMatriz;
    TipoItemMatriz Matriz_Voos[24][24];
}TipoMatriz;

/* Implementação da Inicialização da Estrutura do Item Matriz*/
void IniciarMatriz(TipoMatriz *matriz);

/* Operações da TAD Matriz */
int Conversao(char *horario);
void Inserir(TipoVoo voo, TipoMatriz *matriz);
void Retirar(int id, TipoMatriz *matriz, TipoVoo *voo);
void Localizar(int id, TipoMatriz *matriz, TipoVoo *voo);
void Imprime_inicial_final(char *inicial, char *final, TipoMatriz matriz);
void Imprime_inicial(char *inicial, TipoMatriz matriz, TipoVoo *voo);
void Imprime_final(char *final, TipoMatriz matriz, TipoVoo *voo);
void Imprime_geral(TipoMatriz matriz);
void MaiorNumero(TipoMatriz matriz);
void MenorNumero(TipoMatriz matriz);
void MaisRecente(TipoMatriz matriz);
void MenosRecente(TipoMatriz matriz);
void Espaca(TipoMatriz matriz);
