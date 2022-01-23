#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED

#include <string>
#include <iostream>
#include "Date.h"


class Auteur
{
public:
    Auteur();
    Auteur(std::string nom, std::string prenom, std::string idAuteur, Date naissance);
    void afficherAuteur();
    std::string getId();
    Date getDateNaissance();

protected:
    std::string m_nom;
    std::string m_prenom;
    std::string m_idAuteur;
    Date m_naissance;

};

#endif // AUTEUR_H_INCLUDED
