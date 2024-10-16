#include "Dado.h"

#include <cstdlib>
#include <ctime>

Dado :: Dado (){};

int Dado::tirarDado(int cantidadDados, int cantidadCaras) {
    int tirada = 0;

    for (int i = 0; i < cantidadDados; ++i) {
        tirada += (rand() % cantidadCaras) + 1;
    }

    return tirada;
}
