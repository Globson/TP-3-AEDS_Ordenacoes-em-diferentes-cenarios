//
// Autores: Elida Emilly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//
#include "Headers/MatrizVoos.h"

int main() {
    /* Inicialização das TAD's */
    TipoVoo voo;
    TipoMatriz matriz;

    /* Declaração de variavéis auxiliares */
    int m,pista;
    char n[2], Hr[10], Hr1[10], Aero[50], Aero1[50];

    /* Inicialização da Matriz */
    IniciarMatriz(&matriz);

    while (1>0){
        /* Menu Interativo até o usuário desejar sair */
        printf("                          _|_\n");
        printf("                  --o--o--(_)--o--o--\n");
        printf("                  SISTEMA DE AEROPORTO\n");
        printf(" ----------------------- MENU -----------------------\n");
        printf("                        DIGITE: \n");
        printf("< A > INSERIR NOVO VOO POR ARQUIVO\n");
        printf("< B > INSERIR NOVO VOO\n");
        printf("< C > RETIRAR VOO PELO ID\n");
        printf("< D > PESQUISAR VOO PELO ID\n");
        printf("< E > IMPRIMIR VOO PELO HORARIO DE DECOLAGEM E POUSO\n");
        printf("< F > IMPRIMIR VOO PELO HORARIO DE DECOLAGEM\n");
        printf("< G > IMPRIMIR VOO PELO HORARIO DE POUSO\n");
        printf("< H > IMPRIMIR TODOS OS VOOS\n");
        printf("< I > FAIXA COM MAIOR NUMERO DE VOOS\n");
        printf("< J > FAIXA COM MENOR NUMERO DE VOOS\n");
        printf("< K > FAIXA DE VOO MAIS RECENTE\n");
        printf("< L > FAIXA DE VOO MENOS RECENTE\n");
        printf("< M > VERIFICAÇÃO SE FAIXA DE HORARIOS COM MAIS DE UM VOO\n");
        printf("< N > SAIR\n");
        printf(" ----------------------------------------------------\n");
        printf("Operacao: ");
        scanf("%s", n);

        if((strcmp(n, "a") == 0) || (strcmp(n, "A") == 0)){
            FILE *f = fopen("teste.txt", "r");
            char palavra[50], hora[10], hora1[10];
            while (fscanf(f, "%s", palavra) == 1){
                if(strcmp(palavra, "b") == 0){
                    /* Inicializando Voo no Tad_Voo */
                    IniciarVoo(&voo);

                    /* Recebendo Horário de Decolagem e Pouso, utilizando da
                    operação de alteração dos itens */
                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);
                    setHr_dec(&voo, hora);

                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);
                    setHr_pouso(&voo, hora);

                    /* Recebendo Aeroporto de Decolagem e Pouso, utilizando da
                    operação de alteração dos itens */
                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);
                    setAeroporto_dec(&voo, hora);

                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);
                    setAeroporto_pouso(&voo, hora);

                    /* Recebendo número da pista de pouso */
                    fscanf(f, "%s", palavra);
                    pista = (palavra[0] - '0');
                    setId_pista(&voo, pista);

                    /* Inserção dos novos dados na Matriz*/
                    Inserir(voo, &matriz);

                } else if(strcmp(palavra, "c") == 0){
                    fscanf(f, "%s", palavra);
                    if(strlen(palavra) == 1){
                        pista = (palavra[0] - '0');
                    } else if(strlen(palavra) == 2){
                        pista = ((palavra[0] - '0')*10) + (palavra[1] - '0');
                    } else if(strlen(palavra) == 3){
                        pista = ((palavra[0] - '0')*100) + ((palavra[1] - '0')*10) + (palavra[2] - '0');
                    } else if(strlen(palavra) == 4){
                        pista = ((palavra[0] - '0')*1000) + ((palavra[1] - '0')*100) + ((palavra[2] - '0')*10) + (palavra[3] - '0');
                    }

                    /* Retirada de dados na Matriz através do numero de id recebido*/
                    Retirar(pista, &matriz, &voo);

                } else if(strcmp(palavra, "d") == 0){
                    fscanf(f, "%s", palavra);
                    if(strlen(palavra) == 1){
                        pista = (palavra[0] - '0');
                    } else if(strlen(palavra) == 2){
                        pista = ((palavra[0] - '0')*10) + (palavra[1] - '0');
                    } else if(strlen(palavra) == 3){
                        pista = ((palavra[0] - '0')*100) + ((palavra[1] - '0')*10) + (palavra[2] - '0');
                    } else if(strlen(palavra) == 4){
                        pista = ((palavra[0] - '0')*1000) + ((palavra[1] - '0')*100) + ((palavra[2] - '0')*10) + (palavra[3] - '0');
                    }

                    /* Procura de dados na Matriz através do numero de id recebido*/
                    Localizar(pista, &matriz, &voo);

                } else if(strcmp(palavra, "e") == 0){
                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);

                    fscanf(f, "%s", palavra);
                    strcpy(hora1, palavra);

                    /* Imprensão de dados da Matriz através da hora de decolagem e pouso recebidos */
                    Imprime_inicial_final(hora, hora1, matriz);

                } else if(strcmp(palavra, "f") == 0){
                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);

                    /* Imprensão de dados da Matriz através da hora de decolagem recebida */
                    Imprime_inicial(hora, matriz, &voo);

                } else if(strcmp(palavra, "g") == 0){
                    fscanf(f, "%s", palavra);
                    strcpy(hora, palavra);

                    /* Imprensão de dados da Matriz através da hora de pouso recebido */
                    Imprime_final(hora, matriz, &voo);

                } else if(strcmp(palavra, "h") == 0){
                    /* Impressão de Todos os Dados de Voos da Matriz */
                    Imprime_geral(matriz);
                } else if(strcmp(palavra, "i") == 0){
                    /* Verificação em qual posição temos o maior número de voos registrados */
                    MaiorNumero(matriz);
                } else if(strcmp(palavra, "j") == 0){
                    /* Verificação em qual posição temos o menor número de voos registrados */
                    MenorNumero(matriz);
                } else if(strcmp(palavra, "k") == 0){
                    /* Verificação em qual posição temos a atualização mais recente */
                    MaisRecente(matriz);
                } else if(strcmp(palavra, "l") == 0){
                    /* Verificação em qual posição temos a atualização menos recente */
                    MenosRecente(matriz);
                } else if(strcmp(palavra, "m") == 0){
                    /* Verificando se o número de posições da matriz sem voos cadastrados é, no mínimo, o
                    dobro daquelas com pelo menos 1 voo cadastrado */
                    Espaca(matriz);
                }
            }
            fclose(f);

        } else if((strcmp(n, "b") == 0) || (strcmp(n, "B") == 0)){
            /* Inicializando Voo no Tad_Voo */
            IniciarVoo(&voo);

            /* Recebendo Horário de Decolagem e Pouso, utilizando da
               operação de alteração dos itens */
            printf("Horario de Decolagem: ");
            strcpy(Hr, "12");
            setHr_dec(&voo, Hr);
            printf("%s\n", Hr);

            printf("Horario de Pouso: ");
            scanf("%s", Hr1);
            setHr_pouso(&voo, Hr1);
            printf("%s\n", Hr1);

            /* Recebendo Aeroporto de Decolagem e Pouso, utilizando da
               operação de alteração dos itens */
            printf("Aeroporto de Decolagem: ");
            LetraAleatoria(20, &Aero);
            printf("%s\n", Aero);
            setAeroporto_dec(&voo, Aero);

            printf("Aeroporto Pouso: ");
            scanf("%s", Aero1);
            setAeroporto_pouso(&voo, Aero1);

            /* Recebendo número da pista de pouso */
            printf("Digite o numero da Pista de Voo: ");
            scanf("%d", &pista);
            setId_pista(&voo, pista);

            /* Inserção dos novos dados na Matriz*/
            Inserir(voo, &matriz);

        } else if((strcmp(n, "c") == 0) || (strcmp(n, "C") == 0)){
            printf("Digite o Id: ");
            scanf("%d", &m);

            /* Retirada de dados na Matriz através do numero de id recebido*/
            Retirar(m, &matriz, &voo);

        } else if((strcmp(n, "d") == 0) || (strcmp(n, "D") == 0)){
            printf("Digite o Id: ");
            scanf("%d", &m);

            /* Procura de dados na Matriz através do numero de id recebido*/
            Localizar(m, &matriz, &voo);

        } else if((strcmp(n, "e") == 0) || (strcmp(n, "E") == 0)){
            printf("Horario Decolagem: ");
            scanf("%s", Hr);
            printf("Horario Pouso: ");
            scanf("%s", Hr1);

            /* Imprensão de dados da Matriz através da hora de decolagem e pouso recebidos */
            Imprime_inicial_final(Hr, Hr1, matriz);

        } else if((strcmp(n, "f") == 0) || (strcmp(n, "F") == 0)){
            printf("Horario Decolagem: ");
            scanf("%s", Hr);

            /* Imprensão de dados da Matriz através da hora de decolagem recebida */
            Imprime_inicial(Hr, matriz, &voo);

        } else if((strcmp(n, "g") == 0) || (strcmp(n, "G") == 0)){
            printf("Horario Pouso: ");
            scanf("%s", Hr1);

            /* Imprensão de dados da Matriz através da hora de pouso recebido */
            Imprime_final(Hr1, matriz, &voo);

        } else if((strcmp(n, "h") == 0) || (strcmp(n, "H") == 0)){
            /* Impressão de Todos os Dados de Voos da Matriz */
            Imprime_geral(matriz);

        } else if((strcmp(n, "i") == 0) || (strcmp(n, "I") == 0)){
            /* Verificação em qual posição temos o maior número de voos registrados */
            MaiorNumero(matriz);

        } else if((strcmp(n, "j") == 0) || (strcmp(n, "J") == 0)){
            /* Verificação em qual posição temos o menor número de voos registrados */
            MenorNumero(matriz);

        } else if((strcmp(n, "k") == 0) || (strcmp(n, "K") == 0)){
            /* Verificação em qual posição temos a atualização mais recente */
            MaisRecente(matriz);

        } else if((strcmp(n, "l") == 0) || (strcmp(n, "L") == 0)){
            /* Verificação em qual posição temos a atualização menos recente */
            MenosRecente(matriz);

        } else if((strcmp(n, "m") == 0) || (strcmp(n, "M") == 0)){
            /* Verificando se o número de posições da matriz sem voos cadastrados é, no mínimo, o
            dobro daquelas com pelo menos 1 voo cadastrado */
            Espaca(matriz);

        } else if((strcmp(n, "n") == 0) || (strcmp(n, "N") == 0)){
            /* Saida do Menu Interativo da Matriz de Voos */
            break;
        }
    }
    return 0;
}
