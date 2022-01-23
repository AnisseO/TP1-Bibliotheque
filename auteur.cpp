#include "auteur.h"
#include "Date.h"
#include <iostream>

using namespace std;

Auteur::Auteur()
{

}


Auteur::Auteur(string nom, string prenom, string idAuteur, Date naissance):m_nom(nom),m_prenom(prenom), m_idAuteur(idAuteur),m_naissance(naissance)
{

}

void Auteur::afficherAuteur()
{
    cout << m_nom << " " << m_prenom << " ne le " << toString(m_naissance) << " et d'identifiant " << m_idAuteur << endl;
}

string Auteur::getId()
{
    return m_idAuteur;
}

Date Auteur::getDateNaissance()
{
    return m_naissance;
}
