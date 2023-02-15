//
// Created by Mirko on 15/02/2023.
//

#include "Lista.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

Lista::Lista(){

};

void Lista::mostra() {

    cout << "====================================\n"
         << "LISTA DELLA SPESA\n"
         << "====================================\n";
    int n = 1;
    for(Oggetto& oggetto : oggetti){
        cout << n << ") [" << (oggetto.acquistato ? "X" : " ") << "] "
             << oggetto.nome << "\n";
        n++;
    }

    cout << " ====================================\n";
}

void Lista::addOggetto(string oggetto) {
    Oggetto ogg;
    ogg.nome = oggetto;
    ogg.acquistato = false;
    oggetti.push_back(ogg);
    this->salva();
}

void Lista::removeOggetto(int i) {
    oggetti.erase(oggetti.begin() + (i - 1));
    this->salva();
}

void Lista::markAcquistato(int i) {
    oggetti[i - 1].acquistato = true;
    this->salva();
}

void Lista::markNonAcquistato(int i) {
    oggetti[i -1].acquistato = false;
    this->salva();
}

void Lista::carica() {
    ifstream iFile("Listadellaspesa.txt");
    Oggetto ogg;
    string temp;
    if( iFile.is_open()){
        while(iFile.good()){
            getline(iFile,ogg.nome,',');
            getline(iFile,temp,'\n');
            ogg.acquistato = stoi(temp);
            oggetti.push_back(ogg);
        }
        iFile.close();
    }

    else{
        cout << "Non ci sono file da leggere.\n";
    }
}


void Lista::salva() {
    ofstream uFile("Lista_della_spesa.txt");
    if(uFile.is_open()){
        for(int i = 0; i < oggetti.size(); i++){
            uFile << oggetti[i].nome << "," << (oggetti[i].acquistato ? "1" : "0");
            if(i < oggetti.size() - 1){
                uFile << "\n";
            }
        }
        uFile.close();
    }
    else{
        cout << "Errore nella scrittura su File." << endl;
    }
}