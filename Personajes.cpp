#include "Personajes.h"
#include "Dado.h"

Personaje :: Personaje (string n, int v, int m, int e, int dan, int def, int l){
    _nombre = n;
    _vida = v;
    _mana = m;
    _energia = e;
    _danio = dan;
    _defensa = def;
    _nivel = l;
}

//Volvemos los getters const para que no se puedan modificar por error.

int Personaje::getVida() const {
    return _vida;
}

int Personaje::getMana() const {
    return _mana;
}

int Personaje::getEnergia() const {
    return _energia;
}

int Personaje::getDanio() const {
    return _danio;
}

int Personaje::getDefensa() const {
    return _defensa;
}

int Personaje::getNivel() const {
    return _nivel;
}

void Personaje::setVida(int v) {
    _vida = v;
}

void Personaje::setMana(int m) {
    _mana = m;
}

void Personaje::setEnergia(int e) {
    _energia = e;
}

void Personaje::setDanio(int dan) {
    _danio = dan;
}

void Personaje::setDefensa(int def) {
    _defensa = def;
}

void Personaje::setNivel(int l) {
    _nivel = l;
}

Mago::Mago(string n, int v, int m, int e, int dan, int def, int l) : Personaje(n, v, m, e, dan, def, l) {}

Mago::BolaDeFuego(){

    Dado dado;

    return dado.tirarDado(2,20)+getDanio();
}

Guerrero::Guerrero(string n, int v, int m, int e, int dan, int def, int l) : Personaje(n, v, m, e, dan, def, l) {}

Cazador::Cazador(string n, int v, int m, int e, int dan, int def, int l) : Personaje(n, v, m, e, dan, def, l) {}

Sacerdote::Sacerdote(string n, int v, int m, int e, int dan, int def, int l) : Personaje(n, v, m, e, dan, def, l) {}
