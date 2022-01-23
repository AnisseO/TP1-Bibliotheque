#include "livre.h"
#include "emprunt.h"
#include "Date.h"
#include "auteur.h"
#include <iostream>
using namespace std;


Livre::Livre()
{

}



Livre::Livre(string titre, Auteur auteur, string langue, string genre, string isbn, Date Publication):
 m_titre(titre), m_langue(langue), m_auteur(auteur),m_isbn(isbn),m_genre(genre),m_Publication(Publication)
{

}


void Livre::afficherLivre()
{
    cout << endl << m_titre << " ecrit par ";
    m_auteur.afficherAuteur();
    cout << "Langue: " << m_langue << endl << "Genre: " << m_genre << endl << "ISBN: " << m_isbn << " et de date de publication " << toString(m_Publication) << endl;
}

string Livre::GetTitre()
{
    return m_titre;
}

void Livre::afficherTitre()
{
    cout << m_titre << endl;
}
bool Livre::estEgal(Livre const& b)
{
    return (m_isbn==b.m_isbn);
}

bool operator==(Livre& a, Livre& b)
{
    return a.estEgal(b);
}

std::string Livre::GetISBN()
{
    return m_isbn;
}


string Livre::Getidaut()
{
    return m_auteur.getId();
}


bool Livre::estEmprunter()
{
    return m_emprunt.getStatus();
}
