#ifndef LECTEUR_H_INCLUDED
#define LECTEUR_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "livre.h"


class Lecteur
{
public:

    Lecteur();
    Lecteur(std::string nom,std::string prenom,std::string idLecteur);
    std::string getidLecteur();
    void addIsbn(std::string isbn);
    void removeIsbn(std::string isbn);
    void afficherIsbns();
    void afficherLect();
    void addTitre(std::string titre);
    void afficherTitLect();
    bool Titrepresent(std::string T);
    void removetitre(std::string titre);


protected:
    std::string m_idLecteur;
    std::string m_nom;
    std::string m_prenom;
    std::vector<std::string> m_isbnsLecteur;
    std::vector<std::string> m_titreLecteur;
};

#endif
