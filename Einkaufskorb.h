#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Computer.h"
#include "Lenovo.h"
#include "Macbook.h"
#include "Azus.h"
using namespace std;

class Einkaufskorb {

private:

    vector <Computer> inhalt;

public:
    Einkaufskorb ( ) {

    }
    ~Einkaufskorb() {

    }
    void aufnehmen (Computer computer) {
        inhalt.push_back(computer);
    }

    int getAnzahl () {
        int anzahl = inhalt.size();
        return anzahl;
    }
    double gesamtPreis () {
        double gespreis = 0;
        for (auto a: inhalt) {
            gespreis += a.getPreis();
        }
        return gespreis;
    }
    string getInhalt () {
        stringstream s;
        for (auto e: inhalt) {
            int j = 1;
            s << j<<"-" <<  e.getName() <<"\n";
            j++;
        }
        return s.str();
    }
};