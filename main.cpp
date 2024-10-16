#include "Personajes.h"

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // Inicializamos la semilla una unica vez para que las llamdas al ()rand generen resultados distintos.
    // Si la ponemos en el metodo tirarDado, ocurriria lo  mencionado anteriormente.
    srand(time(NULL));

    Mago Mago("Mago",85,100,100,15,3,1);

    cout<<Mago.BolaDeFuego();

    return 0;
}
