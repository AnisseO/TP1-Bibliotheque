#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include "livre.h"
#include "lecteur.h"
#include "auteur.h"
#include "emprunt.h"
#include "Date.h"
#include "isbn.h"


class Library
{
public:
    Library();
    void addLivre(Livre liv);
    void addLecteur(Lecteur lect);
    void addAuteur(Auteur aut);
    void addIsbn2(Isbn isbn);
    std::vector<Livre> getLivres();
    void afficherLivres();
    void afficherToutleslivres();
    void afficherLecteurs();
    void afficherAuteurs();
    void EmprunterLivre2(Lecteur& y,std::string nomasupp);
    void RestituerLivre(Lecteur& z,std::string nomarestit,Livre livre);
    void afficherLivresAuteur();
    void afficherLivresLecteur(Lecteur L);
    bool livreEstPresent(Livre& x);
    void pourcentage(Library Bib);

protected:
    std::vector<Livre> m_livres;
    std::vector<Livre> m_toutleslivres;
    std::vector<Lecteur> m_lecteurs;
    std::vector<Auteur> m_auteurs;
    std::vector<Emprunt> m_emprunts;
    std::vector<Isbn> m_isbns;

};



#endif
