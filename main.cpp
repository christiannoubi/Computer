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
    cout << "1- Macbook Pro " << endl;
    cout << "2- Lenovo " << endl;
    cout << "3- Azus " << endl;
do  {
    cin >> wahl;
    if (wahl == 1) {
        Computer *computer = new Macbook();
        cout << "Macbook Pro" << endl;
        computer->setPreis(2399);
        computer->setFarbe("Grau");
        computer->setName("Macbook Pro");
        computer->setRahm(16);
        einkaufskorb->aufnehmen(*computer);
    } else if (wahl == 2) {
        Computer *computer1 = new Lenovo();
        cout << "Lenovo" << endl;
        computer1->setPreis(1299);
        computer1->setFarbe("Schwarz");
        computer1->setName("Lenovo");
        computer1->setRahm(8);
        einkaufskorb->aufnehmen(*computer1);

    } else if (wahl == 3) {
        Computer *computer2 = new Azus();
        cout << "Azus" << endl;
        computer2->setPreis(799);
        computer2->setFarbe("Blau");
        computer2->setName("Azus");
        computer2->setRahm(8);
        einkaufskorb->aufnehmen(*computer2);
    } else if (wahl == 0) {
        break;
    } else {
        cout << "Geben Sie eine Zahl zwischen 0 und 3" << endl;
    }
} while (wahl!=0);

    cout << "==================Folgende wurde eingekauft=================" << endl;
    cout << einkaufskorb->getInhalt() <<endl;
    cout << "Gesamtcomputer:"<<einkaufskorb->getAnzahl() <<endl;
    cout << "Gesamtpreis:"<<einkaufskorb->gesamtPreis() <<endl;
    return 0;

}