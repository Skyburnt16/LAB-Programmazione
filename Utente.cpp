//
// Created by Mirko on 16/02/2023.
//

#include "Utente.h"
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Utente::Utente(string n) {

    nome = n;

}



void Utente::AddL(string l, Utente u) {


    map<Lista,Utente>::iterator itr = liste.begin();
    bool found = false;
    while(itr != liste.end()){
        if(itr->first.getNomeLista() == l && itr->second.getnome() == u.getnome())
            found = true;
    }

    if(found == false)
        liste.insert(make_pair(Lista(l),u));

    else
        cout << "Questa lista esiste gia' per l'utente : "<< u.getnome();

}

void Utente::removeL(Lista l, Utente u) {

    map<Lista, Utente> ::iterator itr = liste.begin();
    while(itr != liste.end()){
        if(l.getNomeLista() == itr->first.getNomeLista() && u.getnome() == itr->second.getnome())
            liste.erase(itr);
    }

    cout <<"Eliminato lista : " << l.getNomeLista() << " da utente : " << u.getnome();
}

string Utente::getnome() {

    return this->nome;
}



void Utente::mostraLperU(const Utente u) {

    map<Lista,Utente>:: iterator itr = liste.begin();
    int n = 1;
    cout << "========================================";
    while(itr != liste.end()){
        if(itr -> second.nome == u.nome){
            cout << n << ") " << itr->first.getNomeLista()<<endl;
            n++;
        }
    }
    cout << "=======================================";

}

Utente::~Utente() {

}





