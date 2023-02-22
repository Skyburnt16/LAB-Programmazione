//
// Created by Mirko on 20/02/2023.
//

#include "Oggetto.h"

Oggetto::Oggetto() {

    nome = "cibo";
    categoria = "indefinita";
    prezzo = 0;
    acquistato = false;
    quantita = 1;

}

Oggetto::Oggetto(string n,string c,float p, bool a ,int q) {
    nome = n;
    categoria = c;
    prezzo = p;
    acquistato = a;
    quantita = q;
}

const string &Oggetto::getNome() const {
    return nome;
}

bool Oggetto::isAcquistato() const {
    return acquistato;
}

int Oggetto::getQuantita() const {
    return quantita;
}

const string &Oggetto::getCategoria() const {
    return categoria;
}

float Oggetto::getPrezzo() const {
    return prezzo;
}

void Oggetto::setNome(const string &nome) {
    Oggetto::nome = nome;
}

void Oggetto::setAcquistato(bool acquistato) {
    Oggetto::acquistato = acquistato;
}

void Oggetto::setQuantita(int quantita) {
    Oggetto::quantita = quantita;
}

void Oggetto::setCategoria(const string &categoria) {
    Oggetto::categoria = categoria;
}

void Oggetto::setPrezzo(float prezzo) {
    Oggetto::prezzo = prezzo;
}

Oggetto::~Oggetto() {

}
