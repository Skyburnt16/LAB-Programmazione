//
// Created by Mirko on 15/02/2023.
//

#ifndef LISTA_DELLA_SPESA_LISTA_H
#define LISTA_DELLA_SPESA_LISTA_H

#include <string>
#include <vector>
using namespace std;

struct Oggetto{

    string nome;
    bool acquistato;

};

class Lista {

    private:
        vector<Oggetto> oggetti;

    public:
        Lista();

        void mostra();

        void addOggetto(string oggetto);

        void removeOggetto(int i);

        void markAcquistato(int i);

        void markNonAcquistato(int i);

        void carica();

        void salva();

};


#endif //LISTA_DELLA_SPESA_LISTA_H
