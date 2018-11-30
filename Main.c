// Autores: Samuel Pedro - 3494, Estela Miranda - 3305, Yuri Dimitre - 3485.
#include "Headers/TipoVetor.h"

int main() {
    /* Inicialização das TAD's */
    TipoVoo voo;
    TipoMatriz matriz;
    TipoVetor vet, vet1, vet2, vet3, vet4, vet5;
    srand((unsigned)time(NULL));

    /* Declaração de variavéis auxiliares */
    int m, pista, n, TamanhoVetor;
    int compara, movimenta;
    char auxHr, auxHr1, auxHr2, auxHr3,auxHr4, Hr[10], Aero[50], Aero1[50];
    char auxAero[2], auxAero1[2], auxAero2[2];

    while(1){
      printf("\n===================== Menu =====================\n");
      printf("    1 - Automatico   2 - Arquivo   3 - Sair\n");
      printf("================================================\n");
      printf("Digite a opcao desejada:");
      scanf("%d", &n);

      if(n == 1){
        printf("===================== Menu =====================\n");
        printf("              Escolha um Cenario\n");
        printf("================================================\n");
        printf("Entre:");
        scanf("%d", &n);

        if(n == 1){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<75; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 2){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 3){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<75; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 4){
          TamanhoVetor = 365;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 5){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<730; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 6){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 7){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<730; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 8){
          TamanhoVetor = 3650;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 9){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<7300; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 10){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 11){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
            }

            for(int i=0; i<7300; i++){
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        } else if(n == 12){
          TamanhoVetor = 36500;
          AlocaVetor(&vet, TamanhoVetor);
          AlocaVetor(&vet1, TamanhoVetor);
          AlocaVetor(&vet2, TamanhoVetor);
          AlocaVetor(&vet3, TamanhoVetor);
          AlocaVetor(&vet4, TamanhoVetor);
          AlocaVetor(&vet5, TamanhoVetor);

          for(int i=0; i<TamanhoVetor; i++){
              IniciarMatriz(&matriz);
              vet.ListaIdMatriz[i] = matriz;
              vet1.ListaIdMatriz[i] = matriz;
              vet2.ListaIdMatriz[i] = matriz;
              vet3.ListaIdMatriz[i] = matriz;
              vet4.ListaIdMatriz[i] = matriz;
              vet5.ListaIdMatriz[i] = matriz;
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

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero, auxAero);
                 setAeroporto_dec(&voo, Aero);

                 LetraAleatoria((rand()%1053), &auxAero);
                 LetraAleatoria((rand()%1053), &auxAero1);
                 LetraAleatoria((rand()%1053), &auxAero2);
                 strcat(auxAero, auxAero1);
                 strcat(auxAero1, auxAero2);
                 strcpy(Aero1, auxAero);
                 setAeroporto_pouso(&voo, Aero1);

                 pista = rand()%10;
                 setId_pista(&voo, pista);

                 Inserir(voo, &vet.ListaIdMatriz[i]);
                 Inserir(voo, &vet1.ListaIdMatriz[i]);
                 Inserir(voo, &vet2.ListaIdMatriz[i]);
                 Inserir(voo, &vet3.ListaIdMatriz[i]);
                 Inserir(voo, &vet4.ListaIdMatriz[i]);
                 Inserir(voo, &vet5.ListaIdMatriz[i]);
              }
            }

        }

        while(1){
          printf("===================== Menu =====================\n");
          printf("              Como Deseja Ordenar\n");
          printf(" 1 - BubbleSort   2 - SelectSort  3 - InsertSort\n");
          printf(" 4 - ShellSort    5 - QuickSort   6 - HeapSort\n");
          printf(" 7 - Sair\n");
          printf("================================================\n");
          printf("Digite a opcao desejada:");
          scanf("%d", &m);

          if(m == 1){
            compara = 0;
            movimenta = 0;
            BubbleSort(&vet, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em BubbleSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 2){
            compara = 0;
            movimenta = 0;
            SelectSort(&vet1, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em SelectSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 3){
            compara = 0;
            movimenta = 0;
            InsertSort(&vet2, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em InsertSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 4){
            compara = 0;
            movimenta = 0;
            ShellSort(&vet3, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em ShellSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 5){
            compara = 0;
            movimenta = 0;
            QuickSort(&vet4, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em QuickSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 6){
            compara = 0;
            movimenta = 0;
            HeapSort(&vet5, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em HeapSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 7){
            break;
          }
        }

      } else if(n == 2){  //Samuelzim começou a parada de arquivo// n to sabendo como ler aquela parada X0 // #YURICABAÇO
        FILE *f;
        char nome_arquivo[20], palavra[10];
        int VetorIndice[73], n;

        printf("===================== Menu =====================\n");
        printf("              Escolha um Cenario\n");
        printf("================================================\n");
        printf("Entre:");
        scanf("%d", &n);
        printf("\nDigite o nome do arquivo que deseja abrir:");
        scanf("%s",nome_arquivo);

        f = fopen(nome_arquivo,"r");
        if(f == NULL){
        printf("\n\tErro!Nao foi possivel abrir arquivo!\n");}
        else{
          printf("\n\tArquivo aberto com sucesso!\n");
          //TODO LEITURA DO ARQUIVO E CHAMADA DE OPERAÇÕES//

          if(n == 1){
            TamanhoVetor = 365;
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);
            AlocaVetor(&vet2, TamanhoVetor);
            AlocaVetor(&vet3, TamanhoVetor);
            AlocaVetor(&vet4, TamanhoVetor);
            AlocaVetor(&vet5, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
                vet2.ListaIdMatriz[i] = matriz;
                vet3.ListaIdMatriz[i] = matriz;
                vet4.ListaIdMatriz[i] = matriz;
                vet5.ListaIdMatriz[i] = matriz;
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
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet2.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet3.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet4.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet5.ListaIdMatriz[VetorIndice[i]]);
              }
            }
          } else if(n == 2){
            TamanhoVetor = 365;
            AlocaVetor(&vet, TamanhoVetor);
            AlocaVetor(&vet1, TamanhoVetor);
            AlocaVetor(&vet2, TamanhoVetor);
            AlocaVetor(&vet3, TamanhoVetor);
            AlocaVetor(&vet4, TamanhoVetor);
            AlocaVetor(&vet5, TamanhoVetor);

            for(int i=0; i<TamanhoVetor; i++){
                IniciarMatriz(&matriz);
                vet.ListaIdMatriz[i] = matriz;
                vet1.ListaIdMatriz[i] = matriz;
                vet2.ListaIdMatriz[i] = matriz;
                vet3.ListaIdMatriz[i] = matriz;
                vet4.ListaIdMatriz[i] = matriz;
                vet5.ListaIdMatriz[i] = matriz;
              }

            for(int i=0; i<TamanhoVetor; i++){
              fscanf(f, "%s", palavra);

              if(strlen(palavra) == 1){
                VetorIndice[i] = palavra[0] - '0';
              } else if(strlen(palavra) == 2){
                VetorIndice[i] = (palavra[0] - '0')*10 + (palavra[1] - '0');
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
                  setAeroporto_dec(&voo, Aero);

                  fscanf(f, "%s", palavra);
                  if(strlen(palavra) == 1){
                    pista = palavra[0] - '0';
                  } else if(strlen(palavra) == 2){
                    pista = (palavra[0] - '0')*10 + (palavra[1] - '0');
                  }
                  setId_pista(&voo, pista);

                  Inserir(voo, &vet.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet1.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet2.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet3.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet4.ListaIdMatriz[VetorIndice[i]]);
                  Inserir(voo, &vet5.ListaIdMatriz[VetorIndice[i]]);
              }
            }

          } else if(n == 3){

          } else if(n == 4){

          } else if(n == 5){

          } else if(n == 6){

          } else if(n == 7){

          } else if(n == 8){

          } else if(n == 9){

          } else if(n == 10){

          } else if(n == 11){

          } else if(n == 12){

          }

          fclose(f);
        }

        while(1){
          printf("===================== Menu =====================\n");
          printf("              Como Deseja Ordenar\n");
          printf(" 1 - BubbleSort   2 - SelectSort  3 - InsertSort\n");
          printf(" 4 - ShellSort    5 - QuickSort   6 - HeapSort\n");
          printf(" 7 - Sair\n");
          printf("================================================\n");
          printf("Digite a opcao desejada:");
          scanf("%d", &m);

          if(m == 1){
            compara = 0;
            movimenta = 0;
            BubbleSort(&vet, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em BubbleSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 2){
            compara = 0;
            movimenta = 0;
            SelectSort(&vet1, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em SelectSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 3){
            compara = 0;
            movimenta = 0;
            InsertSort(&vet2, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em InsertSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 4){
            compara = 0;
            movimenta = 0;
            ShellSort(&vet3, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em ShellSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 5){
            compara = 0;
            movimenta = 0;
            QuickSort(&vet4, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em QuickSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 6){
            compara = 0;
            movimenta = 0;
            HeapSort(&vet5, TamanhoVetor, &compara, &movimenta);
            printf("===================== Menu =====================\n");
            printf("              Ordenado em HeapSort\n");
            printf("Comparações: %d\n", compara);
            printf("Movimentações: %d\n", movimenta);
            printf("================================================\n");

          } else if(m == 7){
            break;
          }
        }

      } else if(n == 3){
        int f = 0;
      printf("\nDeseja realmente finalizar a execucao do programa?\n\t1.Sim\n\t2.Nao\n");
      while(f != 1 && f != 2){
        printf("Digite a opcao desejada:");
        scanf("%d",&f);
        if(f != 1 && f != 2){
          printf("Opcao invalida!\n");}}
      if(f == 1){
        printf("\n\t\t  -----------------------------\n\n\t\t   Desenvolvedores:\n\t\t    Yuri Dimitre - 3485\n\t\t    Samuel Sena - 3494\n\t\t    Estela Miranda - 3305\n\n\t\t  OBRIGADO POR UTILIZAR O PROGRAMA!\n");
        break;}
      if(f == 2){
        printf("\n\tFinalizacao cancelada!\n");}
      }
      else{
        printf("\nOpcao invalida!\n");
      }
    }
    return 0;
}
