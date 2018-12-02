#include "../Headers/ContadorTempo.h"

void IniciarTimer(Timer *timer){
    timer->tempoInicial = clock();
}

void PararTimer(Timer *timer){
    timer->tempoFinal = clock();
    timer->tempoTotal = (double)(timer->tempoFinal - timer->tempoInicial)/CLOCKS_PER_SEC;
}

double TempoTotal(Timer timer){
    return timer.tempoTotal;
}
