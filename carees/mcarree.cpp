#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    const int nbCarres = 4;

    CCarre carres[nbCarres] = {
        CCarre(10, 20, 5),
        CCarre(20, 40, 10),
        CCarre(30, 60, 15),
        CCarre(40, 80, 20)
    };

    cout << "Affichage des 4 carres apres initialisation:" << endl;
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

    return 0;
}
