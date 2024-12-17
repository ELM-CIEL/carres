#include <iostream>
#include "carre.h"

CCarre::CCarre() {
    sx = 0;
    sy = 0;
    cote = 1;
}

CCarre::CCarre(int sx1, int sy1, unsigned int cote1) {
    sx = sx1;
    sy = sy1;
    cote = cote1;
}

void CCarre::Setsx(int sx1) {
    sx = sx1;
}

void CCarre::Setsy(int sy1) {
    sy = sy1;
}

void CCarre::Setcote(unsigned int cote1) {
    cote = cote1;
}

void CCarre::Afficher() {
    std::cout << "Carre: (" << sx << ", " << sy << "), Cote: " << cote << std::endl;
}

int CCarre::Getsx() {
    return sx;
}

int CCarre::Getsy() {
    return sy;
}

int CCarre::GetCote() {
    return cote;
}

void CCarre::Deplacer(char direction, int saut) {
    switch (direction) {
    case 'n': sy -= saut; break;
    case 's': sy += saut; break;
    case 'o': sx -= saut; break;
    case 'e': sx += saut; break;
    default: break;
    }
}

void CCarre::Deplacer(int dx, int dy) {
    sx += dx;
    sy += dy;
}
