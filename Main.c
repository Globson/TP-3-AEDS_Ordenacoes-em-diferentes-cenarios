#include "Headers/TipoVetor.h"

int main() {
    /* Inicialização das TAD's */
    TipoMatriz matriz;
    TipoVetor vet, vet1, vet2, vet3, vet4, vet5;

    /* Declaração de variavéis auxiliares */
    int m, pista, n, TamanhoVetor;
    long int compara, movimenta;
    char Hr[10], Hr1[10], Aero[50], Aero1[50];
    char auxAero[2], auxAero1[2], auxAero2[2];

    while(1){
      printf("===================== Menu =====================\n");
      printf("    1 - Automatico   2 - Arquivo   3 - Sair\n");
      printf("================================================\n");
      scanf("%d", &n);

      if(n == 1){
        printf("===================== Menu =====================\n");
        printf("              Escolha um Cenario\n");
        printf("================================================\n");
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

        } else if(n == 9){
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

        } else if(n == 10){
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

        } else if(n == 11){
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

        } else if(n == 12){
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

        }

        while(1){
          printf("===================== Menu =====================\n");
          printf("              Como Deseja Ordenar\n");
          printf(" 1 - BubbleSort   2 - SelectSort  3 - InsertSort\n");
          printf(" 4 - ShellSort    5 - QuickSort   6 - HeapSort\n");
          printf(" 7 - Sair\n");
          printf("================================================\n");
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

      } else if(n == 2){

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
    }
    return 0;
}
