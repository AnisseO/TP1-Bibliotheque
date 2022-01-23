#include "emprunt.h"
#include "Date.h"
using namespace std;


Emprunt::Emprunt()
{

}


Emprunt::Emprunt(string isbn, string idEmp, Date dat):m_isbn(isbn),m_idEmp(idEmp),m_dat(dat),m_status(false)
{

}

void Emprunt::AfficherEmprunt()
{
    cout <<endl << "etiquette d'emprunt " << endl;
    cout << "ISBN: " << m_isbn << endl << "idEmp: " << m_idEmp << endl;
    cout << "Date d'emprunt: " << toString(m_dat) << endl;
}

bool Emprunt::emprunterLivre(string isbn)
{
    if (m_status)
    {
        return false;
    }
    else
    {
        return true;
    }
}


bool Emprunt::getStatus()
{
    return m_status;
}


void Emprunt::emprunter(string idLecteur)
{
    m_status=true;
    m_idEmp=idLecteur;
}


ostream& operator<<(ostream& os, Emprunt const& E)
{
    if(E.m_status==false)
    {
        os << "Le livre n'a pas ete emprunter";
    }
    else
    {
        os << "Emprunter par " << E.m_idEmp;
    }
 return os;
}

