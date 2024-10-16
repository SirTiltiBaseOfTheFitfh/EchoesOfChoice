#ifndef ENEMIGOS_H_INCLUDED
#define ENEMIGOS_H_INCLUDED

#include "Personajes.h"

#include <string>

using namespace std;

class Bandido : public Personaje {
public:
    Bandido(string n, int v, int m, int e, int dan, int def, int l);
    void GolpeBasico();
    void AsaltoBasico();
    void Huir();
};

class Saqueador : public Personaje {
public:
    Saqueador(string n, int v, int m, int e, int dan, int def, int l);
    void GolpeCertero();
    void AsaltoAvanzado();
    void PolveEnceguesedor();
};

class MuertoViviente : public Personaje {
public:
    MuertoViviente(string n, int v, int m, int e, int dan, int def, int l);
    void GolpeBasico();
    void EscudoBasico();
    void Regenerar();
};

class GolemAntiguo : public Personaje {
public:
    GolemAntiguo(string n, int v, int m, int e, int dan, int def, int l);
    void PunioContundente();
    void PisadaSismica();
    void ProteccionArcana();
};


#endif // ENEMIGOS_H_INCLUDED
