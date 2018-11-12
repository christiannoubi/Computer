#pragma once;
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Computer {

private:
    string name;
    string farbe;
    double speicher;
    double rahm;
    double preis;

public:
    Computer (string name, string farbe, double speicher, double rahm, double preis) {
        this->name = name;
        this->farbe = farbe;
        this->speicher = speicher;
        this->rahm = rahm;
    }
    Computer () {

    }

    double getPreis() const {
        return preis;
    }

    void setPreis(double preis) {
        Computer::preis = preis;
    }

    string getName() const {
        return name;
    }

    void setName (const string &name) {
        Computer::name = name;
    }

    string getFarbe() const {
        return farbe;
    }

    void setFarbe(const string &farbe) {
        Computer::farbe = farbe;
    }

    double getSpeicher() const {
        return speicher;
    }

    void setSpeicher(double speicher) {
        Computer::speicher = speicher;
    }

    double getRahm() const {
        return rahm;
    }

    void setRahm(double rahm) {
        Computer::rahm = rahm;
    }
    string text () {
        stringstream s;
        s <<"Name:" <<name << ";" <<" Farbe: " << farbe <<";" <<" Speicher: " << speicher << ";" << rahm;
        return s.str();
    }
};