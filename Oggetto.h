//
// Created by Mirko on 20/02/2023.
//

#ifndef LISTA_DELLA_SPESA_OGGETTO_H
#define LISTA_DELLA_SPESA_OGGETTO_H
#include <string>
#include <vector>
using namespace std;

class Oggetto {

private:
    string nome;
    bool acquistato;
    int quantita;
    string categoria;
    float prezzo;

public:

    Oggetto();

    Oggetto(string n,string c,float p, bool a = false,int q = 1);

    const string &getNome() const;

    bool isAcquistato() const;

    int getQuantita() const;

    const string &getCategoria() const;

    float getPrezzo() const;

    void setNome(const string &nome);

    void setAcquistato(bool acquistato);

    virtual ~Oggetto();

    void setQuantita(int quantita);

    void setCategoria(const string &categoria);

    void setPrezzo(float prezzo);

};


#endif //LISTA_DELLA_SPESA_OGGETTO_H
