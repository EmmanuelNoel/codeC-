#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED





class Arme
{
public:

    Arme();
    Arme(std::string nom,int degats);
    void changer (std::string nom,int degats);
    void afficher() const;

private:
  int  m_degats;
    std::string m_nom;
    int getDegats() const;


};

#endif // ARME_H_INCLUDED
