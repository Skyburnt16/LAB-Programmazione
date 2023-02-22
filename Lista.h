//
// Created by Mirko on 15/02/2023.
//

#ifndef LISTA_DELLA_SPESA_LISTA_H
#define LISTA_DELLA_SPESA_LISTA_H

#include <string>
#include <vector>
#include "Oggetto.h"
using namespace std;

class Lista {

private:

    string nomeL;
    vector<Oggetto> oggetti;

public:
    Lista(string n);

    string getNomeLista() const;

    void mostra();

    void addOggetto(string oggetto,string categoria,float prezzo);

    void removeOggetto(int i);

    void markAcquistato(int i);

    virtual ~Lista();

    void markNonAcquistato(int i);




};


#endif //LISTA_DELLA_SPESA_LISTA_H
