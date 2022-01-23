#ifndef EMPRUNT_H_INCLUDED
#define EMPRUNT_H_INCLUDED
#include <iostream>
#include <string>
#include "Date.h"

class Emprunt
{
public:
    Emprunt();
    Emprunt(std::string isbn, std::string idEmp, Date dat);
    void AfficherEmprunt();
    bool emprunterLivre(std::string isbn);
    bool getStatus();
    void emprunter(std::string idlecteur);
    friend std::ostream& operator<<(std::ostream& os,Emprunt const& E);

protected:
    std::string m_isbn;
    std::string m_idEmp;
    Date m_dat;
    bool m_status;
};


#endif // EMPRUNT_H_INCLUDED
