#include <stdlib.h>
#include <time.h>

typedef struct {
    clock_t tempoInicial;
    clock_t tempoFinal;
    double tempoTotal;
} Timer;

void TimerIniciar(Timer *timer);
void TimerParar(Timer *timer);
double TimerTempoTotal(Timer timer);
