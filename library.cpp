#include "library.h"
#include "Date.h"
#include "livre.h"
#include "emprunt.h"
#include "auteur.h"
#include "lecteur.h"
#include "isbn.h"
#include <vector>
#include <string>
using namespace std;


Library::Library()
{

}


void Library::addLivre(Livre liv)
{
    m_livres.push_back(liv);
    m_toutleslivres.push_back(liv);
}

void Library::addIsbn2(Isbn isbn)
{
    m_isbns.push_back(isbn);
}

void Library::addLecteur(Lecteur lect)
{
    m_lecteurs.push_back(lect);
}

void Library::addAuteur(Auteur aut)
{
    m_auteurs.push_back(aut);
}


vector<Livre> Library::getLivres()
{
    return m_livres;
}


void Library::afficherLivres()
{
    cout << "Liste des livres" << endl;
    for (int i=0; i< m_livres.size(); i++)
    {
        m_livres[i].afficherTitre();
    }
}

void Library::afficherToutleslivres()
{
    cout << "Liste de tous les livres" << endl;
    for (int i=0; i< m_toutleslivres.size(); i++)
    {
        m_toutleslivres[i].afficherTitre();
    }
}


void Library::afficherLecteurs()
{
    cout << "Liste des Lecteurs" << endl;
    for (int h=0; h<m_lecteurs.size(); h++){
        m_lecteurs[h].afficherLect();
    }
}

void Library::afficherAuteurs()
{
    cout << "Liste des Auteurs" << endl;
    for (int w=0; w<m_auteurs.size(); w++){
        m_auteurs[w].afficherAuteur();
    }
}


void Library::RestituerLivre(Lecteur& z,string nomarestit,Livre livre)
{
    for(int i=0; i< m_livres.size(); i++)
    {
        if(m_livres[i].GetTitre() != nomarestit && z.Titrepresent(nomarestit)==true)
        {
                m_livres.push_back(livre);
                z.removeIsbn(livre.GetISBN());
                z.removetitre(livre.GetTitre());
                break;
        }

    }
}


void Library::EmprunterLivre2(Lecteur& a,string nomasupp)
{
    for(int h=0 ;h < m_livres.size() ;h++)
    {
        if (m_livres[h].GetTitre()==nomasupp)
        {
            a.addIsbn(m_livres[h].GetISBN());
            a.addTitre(m_livres[h].GetTitre());
            auto todel = m_livres.begin();
            for(auto it=m_livres.begin(); it!=m_livres.end(); it++)
                {
                    if(it->GetTitre()== nomasupp){
                            m_livres.erase(it);
                            break;
                    }
                }
        }
    }
}



void Library::afficherLivresAuteur()
{
    string idauteur;
    cout << "Saisisez l'id de l'auteur ";
    cin >> idauteur;
    cout << "L'auteur de id " << idauteur << " a ecrit:" << endl;
    for(int i=0;i<m_livres.size();i++)
    {
        if(m_livres[i].Getidaut()==idauteur)
        {
            m_livres[i].afficherTitre();
        }
    }
}

void Library::afficherLivresLecteur(Lecteur L)
{
    L.afficherTitLect();
}

bool Library::livreEstPresent(Livre& x)
{
    for(int i=0 ; i < m_livres.size() ; i++)
    {
        if (m_livres[i]==x)
        {
            return true;
        }
    }
    return false;
}



void Library::pourcentage(Library Bib)
{
    int x=0,y=0;
    cout << "Les livres empruntes sont: " << endl;
    for(int i=0; i<m_toutleslivres.size(); i++)
    {
        y+=1;
        if(Bib.livreEstPresent(m_toutleslivres[i])==false)
        {
            m_toutleslivres[i].afficherTitre();
            x+=1;
        }
    }
    cout << "Le nombre de livre empruntes est: " << x << endl <<"Le nombre des livres est: " << y << endl << "Le pourcentage des livres empruntes est " << (x/y)*100 << " %" << endl;
}
