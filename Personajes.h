#ifndef PERSONAJES_H_INCLUDED
#define PERSONAJES_H_INCLUDED

#include <string>

using namespace std;

class Personaje {
protected:
    string _nombre;
    int _vida;
    int _mana;
    int _energia;
    int _danio;
    int _defensa;
    int _nivel;
public:
    Personaje(string n, int v, int m, int e, int dan, int def, int l);

    int getVida() const;
    int getMana() const;
    int getEnergia() const;
    int getDanio() const;
    int getDefensa() const;
    int getNivel() const;

    void setVida(int v);
    void setMana(int m);
    void setEnergia(int e);
    void setDanio(int dan);
    void setDefensa(int def);
    void setNivel(int l);
};

class Mago : public Personaje {
public:
    Mago(string n, int v, int m, int e, int dan, int def, int l);

    int BolaDeFuego();
    void PulsoArcano();
    void EscudoMagico();
    void Meditar();
};

class Guerrero : public Personaje {
public:
    Guerrero(string n, int v, int m, int e, int dan, int def, int l);

    void Hachazo();
    void Provocar();
    void ResguardarAliado();
    void IraDesatada();
};

class Cazador : public Personaje {
public:
    Cazador(string n, int v, int m, int e, int dan, int def, int l);

    void FlechaRapida();
    void Rafaga();
    void PosicionEstrategica();
    void Descansar();
};

class Sacerdote : public Personaje {
public:
    Sacerdote(string n, int v, int m, int e, int dan, int def, int l);

    void RafagaBendita();
    void Sanar();
    void Purificar();
    void Meditar();
};

#endif // PERSONAJES_H_INCLUDED

