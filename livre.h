#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "auteur.h"
#include "Date.h"
#include "emprunt.h"

class Livre
{
public:

    Livre();
    Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, std::string isbn, Date Publication);
    void afficherLivre();
    std::string GetTitre();
    std::string GetISBN();
    void afficherTitre();
    bool estEgal(Livre const& b);
    std::string Getidaut();
    bool estEmprunter();

protected:
    std::string m_titre;
    Auteur m_auteur;
    std::string m_langue;
    std::string m_genre;
    Date m_Publication;
    std::string m_isbn;
    Emprunt m_emprunt;
    std::vector<std::string> m_emprunteurs;
};

bool operator==(Livre& a, Livre& b);















#endif // LIVRE_H_INCLUDED
