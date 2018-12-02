#include <stdlib.h>
#include <time.h>

typedef struct {
    clock_t tempoInicial;
    clock_t tempoFinal;
    double tempoTotal;
} Timer;

void IniciarTimer(Timer *timer);
void PararTimer(Timer *timer);
double TempoTotal(Timer timer);
