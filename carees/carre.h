#ifndef CAREE_H
#define CAREE_H

class CCarre {
private:
    int sx;
    int sy;
    unsigned int cote; 
public:
    CCarre();
    CCarre(int sx1, int sy1, unsigned int cote1);
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1); 
    void Afficher();
    int Getsx();
    int Getsy();
    int GetCote();
    void Deplacer(char direction, int saut);
    void Deplacer(int dx, int dy);
};

#endif // CAREE_H
