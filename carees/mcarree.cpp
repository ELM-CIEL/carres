#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    const int nbCarres = 4;

    // Tableau statique de 4 carrés
    CCarre carres[nbCarres] = {
        CCarre(10, 20, 5),
        CCarre(20, 40, 10),
        CCarre(30, 60, 15),
        CCarre(40, 80, 20)
    };

    cout << "Affichage des 4 carres apres CCarre :" << endl;
    for (int i = 0; i < nbCarres; ++i) {
        cout << "Carre " << i + 1 << " : ";
        carres[i].Afficher();
    }

    cout << "\nDeplacement des carres :" << endl;

    for (int i = 0; i < nbCarres; ++i) {
        carres[i].Deplacer('n', 5);
        cout << "Carre " << i + 1 << " deplacement vers le Nord : ";
        carres[i].Afficher();

        carres[i].Deplacer('e', 10);
        cout << "Carre " << i + 1 << " deplacement vers l'Est : ";
        carres[i].Afficher();

        carres[i].Deplacer('s', 5);
        cout << "Carre " << i + 1 << " deplacement vers le Sud : ";
        carres[i].Afficher();

        carres[i].Deplacer('o', 10);
        cout << "Carre " << i + 1 << " deplacement vers l'Ouest : ";
        carres[i].Afficher();
    }


    // Allocation dynamique avec "new"

    cout << "\nTest d'allocation dynamique de memoire pour deuxieme carre :" << endl;
    CCarre* pCarre = new CCarre(50, 50, 30);
    cout << "Affichage du carre alloue dynamiquement : ";
    pCarre->Afficher();


    pCarre->Deplacer('n', 10);
    cout << "Apres deplacement vers le Nord : ";
    pCarre->Afficher();

    pCarre->Deplacer('e', 15);
    cout << "Apres deplacement vers l'Est : ";
    pCarre->Afficher();

    pCarre->Deplacer('s', 5);
    cout << "Apres deplacement vers le Sud : ";
    pCarre->Afficher();

    pCarre->Deplacer('o', 20);
    cout << "Apres deplacement vers l'Ouest : ";
    pCarre->Afficher();

    pCarre->Setsx(100);
    pCarre->Setsy(200);
    pCarre->Setcote(50);
    cout << "Apres modification des attributs (sx, sy, cote) : ";
    pCarre->Afficher();

    delete pCarre;
    cout << "Memoire du deuxieme carre liberee avec delete." << endl;

    return 0;
}
