#include <iostream>
#include "carre.h"

int main() {
    const int nbCarres = 4;
    CCarre carres[nbCarres];

    for (int i = 0; i < nbCarres; ++i) {
        carres[i].Setsx(10 * (i + 1));
        carres[i].Setsy(20 * (i + 1));
        carres[i].Setcote(5 * (i + 1));
    }

    std::cout << "Affichage initial des 4 carres :";
    for (int i = 0; i < nbCarres; ++i) {
        std::cout << "Carre " << i + 1 << " : ";
        carres[i].Afficher();
    }

    std::cout << "Deplacement des carres :";

    for (int i = 0; i < nbCarres; ++i) {

        carres[i].Deplacer('n', 5);
        std::cout << "Carre " << i + 1 << " apres deplacement vers le Nord : ";
        carres[i].Afficher();

        carres[i].Deplacer('e', 10);
        std::cout << "Carre " << i + 1 << " apres deplacement vers l'Est : ";
        carres[i].Afficher();

        carres[i].Deplacer('s', 5);
        std::cout << "Carre " << i + 1 << " apres deplacement vers le Sud : ";
        carres[i].Afficher();

        carres[i].Deplacer('o', 10);
        std::cout << "Carre " << i + 1 << " apres deplacement vers l'Ouest : ";
        carres[i].Afficher();
    }

    return 0;
}
