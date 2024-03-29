// Autores: Samuel Pedro - 3494, Estela Miranda - 3305, Yuri Dimitre - 3485.
#include "Headers/TipoVetor.h"
#include "Headers/ContadorTempo.h"

int main() {
    /* Inicialização das TAD's */
    TipoVoo voo;
    TipoMatriz matriz;
    Timer timer;
    TipoVetor vet, vet1;
    srand((unsigned)time(NULL));

    /* Declaração de variavéis auxiliares */
    int m, pista, n=0, TamanhoVetor;
    long int compara, movimenta;
    char auxHr, auxHr1, auxHr2, auxHr3,auxHr4, Hr[10], Aero[50], Aero1[50];
    char auxAero[2], auxAero1[2], auxAero2[2];

      printf("\n===================== Menu =====================\n");
      printf("   1 - Automatico               2 - Arquivo\n");
      printf("================================================\n");
      while(n != 1 && n != 2){
        printf("Digite a opcao desejada:");
        scanf("%d",&n);
        if(n != 1 && n != 2){
          printf("Opcao invalida!\n");}}

      if(n == 1){ //Entrada automatica//
        n=0;
        printf("===================== Menu =====================\n");
        printf("              Escolha um Cenario\n");
        printf("================================================\n");
        while(n != 1 && n != 2 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8 && n != 9 && n != 10 && n != 11 && n != 12){
          printf("Entre com cenario:");                                                //Forçando entrada de valor valido para cenario//
          scanf("%d",&n);
          if(n != 1 && n != 2 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8 && n != 9 && n != 10 && n != 11 && n != 12){
            printf("Cenario invalido!\n");}}

        if(n == 1){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<73; i++){
              int r = rand()%73;    //Selecionando indices para matrizes aleatorias//
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);
                                              //Atribuindo valores aleatorios para voos//
                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);     //Inserindo voos//
                 Inserir(voo, &vet1.ListaIdMatriz[r]);
              }
            }
                                              //Procedimentos de geracao de voos se repetem ate fim de parte interativa//
        } else if(n == 2){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);
                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
              }
            }

        } else if(n == 3){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<73; i++){
              int r = rand()%73;
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);
                 Inserir(voo, &vet1.ListaIdMatriz[r]);
              }
            }

        } else if(n == 4){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
              }
            }

        } else if(n == 5){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<730; i++){
              int r = rand()%730;
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);
                 Inserir(voo, &vet1.ListaIdMatriz[r]);
              }
            }

        } else if(n == 6){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
              }
            }

        } else if(n == 7){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<730; i++){
              int r = rand()%730;
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);
                 Inserir(voo, &vet1.ListaIdMatriz[r]);
              }
            }

        } else if(n == 8){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;

            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);

              }
            }

        } else if(n == 9){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;

            }

            for(int i=0; i<7300; i++){
              int r = rand()%7300;
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);
                 Inserir(voo, &vet1.ListaIdMatriz[r]);

              }
            }

        } else if(n == 10){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);

              }
            }

        } else if(n == 11){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<7300; i++){
              int r = rand()%7300;
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[r]);
                 Inserir(voo, &vet1.ListaIdMatriz[r]);
              }
            }

        } else if(n == 12){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                 IniciarVoo(&voo);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_dec(&voo, Hr);

                 auxHr = rand()%2 + '0';
                 if(auxHr == '2'){
                   auxHr1 = rand()%3 + '0';
                 } else{
                   auxHr1 = rand()%9 + '0';
                 }
                 auxHr2 = ':';
                 auxHr3 = rand()%5 + '0';
                 auxHr4 = rand()%9 + '0';
                 Hr[0] = auxHr; Hr[1] = auxHr1; Hr[2] = auxHr2; Hr[3] = auxHr3; Hr[4] = auxHr4; Hr[5] = '\0';
                 setHr_pouso(&voo, Hr);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), auxAero);
                 LetraAleatoria((rand()%1053), auxAero1);
                 LetraAleatoria((rand()%1053), auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
              }
            }

        }

        while(1){                     //Menu de ordenacoes//
              printf("===================== Menu =====================\n");
              printf("              Como Deseja Ordenar?\n");
              printf(" 1 - BubbleSort   2 - SelectSort  3 - InsertSort\n");
              printf(" 4 - ShellSort    5 - QuickSort   6 - HeapSort\n");
              printf(" 7 - Sair\n");
              printf("================================================\n");
              printf("Digite a opcao desejada:");
              scanf("%d", &m);

              if(m == 1){    //Bubble//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                BubbleSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em BubbleSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

              } else if(m == 2){ //Select//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                SelectSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em SelectSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

              } else if(m == 3){ //Insert//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                InsertSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em InsertSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

              } else if(m == 4){ //Shell//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                ShellSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em ShellSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}
              } else if(m == 5){ //Quick//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                QuickSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em QuickSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

              } else if(m == 6){ //Heap//
                compara = 0;
                movimenta = 0;
                IniciarTimer(&timer);
                HeapSort(&vet1, TamanhoVetor, &compara, &movimenta);
                PararTimer(&timer);
                printf("===================== Menu =====================\n");
                printf("              Ordenado em HeapSort\n");
                printf("Comparações: %ld\n", compara);
                printf("Movimentações: %ld\n", movimenta);
                printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                printf("================================================\n");
                for(int i=0; i<TamanhoVetor; i++){
                vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

              } else if(m == 7){ //Finalização//
                  int f = 0;
                printf("\nDeseja realmente finalizar a execucao do programa?\n\t1.Sim\n\t2.Nao\n");
                while(f != 1 && f != 2){
                  printf("Digite a opcao desejada:");
                  scanf("%d",&f);
                  if(f != 1 && f != 2){
                    printf("Opcao invalida!\n");}}
                if(f == 1){
                  printf("\n\t\t  -----------------------------\n\n\t\t   Desenvolvedores:\n\t\t    Yuri Dimitre - 3485\n\t\t    Samuel Sena - 3494\n\t\t    Estela Miranda - 3305\n\n\t\t  OBRIGADO POR UTILIZAR O PROGRAMA!\n");
                  DesalocaVetor(&vet);   //Desalocando Vetores utilizados//
                  DesalocaVetor(&vet1);
                  break;}
                if(f == 2){
                  printf("\n\tFinalizacao cancelada!\n");}
                }
                else{
                  printf("Opcao invalida!\n");
                }
            }

      } else if(n == 2){  //Entrada por arquivo//
        while(1){
        n=0;
        FILE *f;
        char nome_arquivo[20], palavra[10];
        int n=0;
        printf("===================== Menu =====================\n");
        printf("              Escolha um Cenario\n");
        printf("================================================\n");
        while(n != 1 && n != 2 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8 && n != 9 && n != 10 && n != 11 && n != 12){
          printf("Entre com o cenario:");                                                 //Forçando entrada de valor valido para cenario//
          scanf("%d",&n);
          if(n != 1 && n != 2 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8 && n != 9 && n != 10 && n != 11 && n != 12){
            printf("Cenario invalido!\n");}}

        printf("\nDigite o nome do arquivo que deseja abrir:");    //Abrindo arquivo//
        scanf("%s",nome_arquivo);

        f = fopen(nome_arquivo,"r");
        if(f == NULL){
        printf("\n\tErro!Nao foi possivel abrir arquivo!\n");}  //Caso erro de abertura, programa solicita novamente entrada//
        else{

          printf("\n\tArquivo aberto com sucesso!\n");
          if(n == 1){  //Leitura de arquivo e escrita em matrizes com base no conteudo do arquivo//
            TamanhoVetor = 365;
            int VetorIndice[73];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);


            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<73; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              }
            }

            for(int i=0; i<73; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);       //Recebendo dados dos voos//

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);   //Inserindo em posições do vetor//
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }                     //Leitura e escrita de dados de voos se repetem para todos os cenarios//
            }
          } else if(n == 2){
            TamanhoVetor = 365;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 3){
            TamanhoVetor = 365;
            int VetorIndice[73];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<73; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              }
            }

            for(int i=0; i<73; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 4){
            TamanhoVetor = 365;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 5){
            TamanhoVetor = 3650;
            int VetorIndice[730];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<730; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              }  else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              }
            }

            for(int i=0; i<730; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 6){
            TamanhoVetor = 3650;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              }  else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 7){
            TamanhoVetor = 3650;
            int VetorIndice[730];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<730; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              }  else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              }
            }

            for(int i=0; i<730; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 8){
            TamanhoVetor = 3650;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              } else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 9){
            TamanhoVetor = 36500;
            int VetorIndice[7300];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<7300; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              } else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              } else if(strlen(palavra) == 5){
                VetorIndice[i] = (palavra[0] - '0')*10000 + (palavra[1] - '0')*1000 + (palavra[2] - '0')*100 + (palavra[3] - '0')*10 + (palavra[4] - '0');
              }
            }

            for(int i=0; i<7300; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 10){
            TamanhoVetor = 36500;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              } else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              } else if(strlen(palavra) == 5){
                VetorIndice[i] = (palavra[0] - '0')*10000 + (palavra[1] - '0')*1000 + (palavra[2] - '0')*100 + (palavra[3] - '0')*10 + (palavra[4] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<10; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 11){
            TamanhoVetor = 36500;
            int VetorIndice[7300];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<7300; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              } else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              } else if(strlen(palavra) == 5){
                VetorIndice[i] = (palavra[0] - '0')*10000 + (palavra[1] - '0')*1000 + (palavra[2] - '0')*100 + (palavra[3] - '0')*10 + (palavra[4] - '0');
              }
            }

            for(int i=0; i<7300; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          } else if(n == 12){
            TamanhoVetor = 36500;
            int VetorIndice[TamanhoVetor];
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
              } else if(strlen(palavra) == 3){
                VetorIndice[i] = (palavra[0] - '0')*100 + (palavra[1] - '0')*10 + (palavra[2] - '0');
              } else if(strlen(palavra) == 4){
                VetorIndice[i] = (palavra[0] - '0')*1000 + (palavra[1] - '0')*100 + (palavra[2] - '0')*10 + (palavra[3] - '0');
              } else if(strlen(palavra) == 5){
                VetorIndice[i] = (palavra[0] - '0')*10000 + (palavra[1] - '0')*1000 + (palavra[2] - '0')*100 + (palavra[3] - '0')*10 + (palavra[4] - '0');
              }
            }

            for(int i=0; i<TamanhoVetor; i++){
              for(int j=0; j<100; j++){
                  IniciarVoo(&voo);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_dec(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Hr, palavra);
                  setHr_pouso(&voo, Hr);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  strcpy(Aero, palavra);
                  setAeroporto_pouso(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);

              }
            }
          }

          fclose(f);


          while(1){                     //Menu de ordenacao//
                printf("===================== Menu =====================\n");
                printf("              Como Deseja Ordenar?\n");
                printf(" 1 - BubbleSort   2 - SelectSort  3 - InsertSort\n");
                printf(" 4 - ShellSort    5 - QuickSort   6 - HeapSort\n");
                printf(" 7 - Sair\n");
                printf("================================================\n");
                printf("Digite a opcao desejada:");
                scanf("%d", &m);

                if(m == 1){ //Bubble//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  BubbleSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em BubbleSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

                } else if(m == 2){ //Select//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  SelectSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em SelectSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

                } else if(m == 3){  //Insert//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  InsertSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em InsertSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

                } else if(m == 4){ //Shell//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  ShellSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em ShellSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}
                } else if(m == 5){ //Quick//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  QuickSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em QuickSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

                } else if(m == 6){ //Heap//
                  compara = 0;
                  movimenta = 0;
                  IniciarTimer(&timer);
                  HeapSort(&vet1, TamanhoVetor, &compara, &movimenta);
                  PararTimer(&timer);
                  printf("===================== Menu =====================\n");
                  printf("              Ordenado em HeapSort\n");
                  printf("Comparações: %ld\n", compara);
                  printf("Movimentações: %ld\n", movimenta);
                  printf("Tempo de Execução: %lf\n", TempoTotal(timer));
                  printf("================================================\n");
                  for(int i=0; i<TamanhoVetor; i++){
                  vet1.ListaIdMatriz[i] = vet.ListaIdMatriz[i];}

                } else if(m == 7){ //Finalizacao//
                    int f = 0;
                  printf("\nDeseja realmente finalizar a execucao do programa?\n\t1.Sim\n\t2.Nao\n");
                  while(f != 1 && f != 2){
                    printf("Digite a opcao desejada:");
                    scanf("%d",&f);
                    if(f != 1 && f != 2){
                      printf("Opcao invalida!\n");}}
                  if(f == 1){
                    printf("\n\t\t  -----------------------------\n\n\t\t   Desenvolvedores:\n\t\t    Yuri Dimitre - 3485\n\t\t    Samuel Sena - 3494\n\t\t    Estela Miranda - 3305\n\n\t\t  OBRIGADO POR UTILIZAR O PROGRAMA!\n");
                    DesalocaVetor(&vet);   //Desalocando Vetores utilizados//
                    DesalocaVetor(&vet1);
                    break;}
                  if(f == 2){
                    printf("\n\tFinalizacao cancelada!\n");}
                  }
                  else{
                    printf("Opcao invalida!\n");
                  }
            }break; //parada do while do arquivo//
           }
         }
      }

    return 0;
}
