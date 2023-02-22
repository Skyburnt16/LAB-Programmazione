//
// Created by Mirko on 16/02/2023.
//

#ifndef LISTA_DELLA_SPESA_UTENTE_H
#define LISTA_DELLA_SPESA_UTENTE_H
#include <vector>
#include "Lista.h"
#include <string>
#include <map>
using namespace std;

class Utente {

private:

    map<Lista,Utente> liste;
    string nome;



public:

    Utente(string nome);

    string getnome();

    void AddL(string l, Utente u);

    void removeL(Lista l,Utente u);

    void mostraLperU(Utente u);

    virtual ~Utente();

};


#endif //LISTA_DELLA_SPESA_UTENTE_H
