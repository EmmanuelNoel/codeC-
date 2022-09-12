#ifndef FIGURES_H
#define FIGURES_H

class Figure
{
public:
    virtual void getDonne() = 0 ;
    virtual void afficherResultat() = 0  ;

private:
    int volume;
    int aire;
};


class Pave : public Figure
{
public:
  virtual void getDonne() ;
private:
    int longueur;
    int largeur;
    int hauteur;

};

class Cone: public Figure
{
public:
    void getDonne();
private:
    int rayon;
    int hauteur;

};
class Sphere : public Figure
{
public:
void getDonne();
private:
int rayon;
};
class Cylindre : public Figure
{
public:
    void getDonne();
private:
    int rayon;
    int hauteur;

};





#endif // FIGURES_H
