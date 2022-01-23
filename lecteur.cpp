#include "lecteur.h"
#include "livre.h"
#include <string>
#include <vector>
using namespace std;

Lecteur::Lecteur()
{

}



Lecteur::Lecteur(string nom,string prenom,string idLecteur):m_nom(nom),m_prenom(prenom),m_idLecteur(idLecteur)
{

}

string Lecteur::getidLecteur()
{
    return m_idLecteur;
}

void Lecteur::addIsbn(string isbn)
{
    m_isbnsLecteur.push_back(isbn);
}

void Lecteur::removeIsbn(string isbnasupp)
{
    for(int k=0 ;k < m_isbnsLecteur.size() ;k++)
    {
        if (m_isbnsLecteur[k]== isbnasupp)
        {
            auto todel = m_isbnsLecteur.begin();
            for(auto it= m_isbnsLecteur.begin(); it!= m_isbnsLecteur.end(); it++)
                {
                    if(*it == isbnasupp){
                            m_isbnsLecteur.erase(it);
                            break;
                    }
                }
        }
    }
}


void Lecteur::afficherIsbns()
{
    cout << "Liste de Isbn(s) de " << m_nom << " " << m_prenom << endl;
    for (int i=0; i<m_isbnsLecteur.size()  ;i++){
        cout << m_isbnsLecteur[i] << endl;
    }
    if(m_isbnsLecteur.size()==0)
    {
        cout << "Pas de livre emprunte par ce Lecteur" << endl;
    }
}

void Lecteur::afficherLect()
{
    cout << "Nom: " << m_nom << endl;
    cout << "Prenom: " << m_prenom << endl << "IdLecteur: " << m_idLecteur << endl;
}



bool Lecteur::Titrepresent(string T)
{
    for(int k=0; k<m_titreLecteur.size(); k++)
    {
        if (m_titreLecteur[k] == T){
            return true;
        }
    }
return false;
}


void Lecteur::addTitre(string titre)
{
    m_titreLecteur.push_back(titre);
}


void Lecteur::afficherTitLect()
{
    cout << "Liste de Titre(s) de " << m_nom << " " << m_prenom << endl;
    for (int i=0; i<m_titreLecteur.size()  ;i++){
        cout << m_titreLecteur[i] << endl;
    }
}

 void Lecteur::removetitre(std::string titreasupp)
 {
     for(int k=0 ;k < m_titreLecteur.size() ;k++)
     {
        if (m_titreLecteur[k]== titreasupp)
        {
            auto todel = m_titreLecteur.begin();
            for(auto it= m_titreLecteur.begin(); it!= m_titreLecteur.end(); it++)
            {
                    if(*it == titreasupp)
                    {
                            m_titreLecteur.erase(it);
                            break;
                    }
            }
        }
    }
}
