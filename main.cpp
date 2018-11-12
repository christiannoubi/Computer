#include <iostream>
#include "Computer.h"
#include "Lenovo.h"
#include "Macbook.h"
#include "Einkaufskorb.h"
#include "Azus.h"
using namespace std;

int main() {

    int wahl;
    Einkaufskorb *einkaufskorb = new Einkaufskorb();

    cout << "Willkommen bei Saturn" <<endl;
    cout << "Was wollen Sie einkaufen?" <<endl;
    cout << "Macbook Pro = 1" << endl;
    cout << "Lenovo = 2" << endl;
    cout << "Azus = 3" << endl;

    cin >> wahl;
do  {
    if (wahl == 1) {
        Computer *computer = new Macbook();
        computer->setPreis(2399);
        computer->setFarbe("Grau");
        einkaufskorb->aufnehmen(*computer);
    } else if (wahl == 2) {
        Computer *computer1 = new Lenovo();
        cout << "Lenovo" << endl;
        computer1->setPreis(1299);
        computer1->setFarbe("Schwarz");
        einkaufskorb->aufnehmen(*computer1);
    } else if (wahl == 3) {
        Computer *computer2 = new Azus();
        cout << "Azus" << endl;
        computer2->setPreis(799);
        computer2->setFarbe("Blau");
        einkaufskorb->aufnehmen(*computer2);
    } else if (wahl == 0) {
        break;
    } else {
        cout << "Geben Sie eine Zahl zwischen 0 und 3" << endl;

    }
} while (wahl!=0);

    einkaufskorb->getAnzahl();
    einkaufskorb->gesamtPreis();
    cout << "==================Folgende wurde eingekauft=================" << endl;
    cout << einkaufskorb->getInhalt() <<endl;
    cout << "================== wollen Sie weiter  einkaufen?=================" << endl;

    return 0;

}