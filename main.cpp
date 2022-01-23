#include <iostream>
#include <vector>
#include <string>
#include "Date.h"
#include "livre.h"
#include "emprunt.h"
#include "auteur.h"
#include "lecteur.h"
#include "library.h"
#include "isbn.h"

using namespace std;

int main()
{
    cout << "Premiere Partie" << endl;
    Date a(12,10,2000),b(27,12,1988),c(13,07,1986),d(11,04,2021),e(22,05,1979),f(25,06,1985),g(14,01,1977);
    cout << "Test Date: " ;
    cout << toString(a) << endl;
    Auteur aut1("Leo","Messi","GOAT2",b), aut2("Cristiano","Ronaldo","GOAT1",c), aut3("Zlatan","Ibra","Zlatani",e), aut4("Zniti","Anas","JUGE",f), aut5("Amana","Omar","Legende",f);
    Livre un("Le cauchemar des gardiens",aut1,"Francais","Horreur","2431856399",a);
    Livre deux("I am Legend",aut2,"Anglais","Action et Tiré de vrai faits","5368941259",b);
    Livre trois("Massacreur des journalistes",aut3,"Francais","Historique","1234567890",e);
    Livre quatre("Les Buts en or",aut4,"Arabe","Comédie","1313131313",d);
    Livre cinq("Meurtre dans le Hamam",aut5,"Arabe","Policier","0987654321",a);
    Livre six("7 Ballon d'or",aut1,"Francais","Horreur","3467901256",g);
    Livre sept("Le destructeur des records",aut2,"Francais","Science Fiction","1209348756",c);
    Livre huit("Zlatani d'Arabie",aut3,"Arabe","Guerre","567891320",f);
    Livre neuf("Casablanca",aut5,"Arabe","Drame et Aventure","1275043599",b);
    Livre dix("Les penaux de la mort",aut4,"Francais","Thriller","0000000143",e);
    un.afficherLivre();
    deux.afficherLivre();
    Lecteur moi("Sguiar","Ahmed","sguiarlhamdani"), autre("Ginhac","Dominique","dginhac"),inconnu("MBong","Nico","Gourmant");
    cout << endl;
    inconnu.afficherLect();
    inconnu.addIsbn("5368941259");
    inconnu.addIsbn("2431856399");
    inconnu.afficherIsbns();
    inconnu.afficherTitLect();
    autre.afficherIsbns();
    moi.afficherIsbns();
    Emprunt premier("5368941259","sguiarlhamdani",d);
    premier.AfficherEmprunt();
    cout << endl << "Deuxieme partie" << endl << endl;
    Library Biblio;
    Biblio.addLecteur(moi);
    Biblio.addLecteur(autre);
    Biblio.addAuteur(aut1);
    Biblio.addAuteur(aut2);
    Biblio.addAuteur(aut3);
    Biblio.addAuteur(aut4);
    Biblio.addAuteur(aut5);
    Biblio.addLivre(un);
    Biblio.addLivre(deux);
    Biblio.addLivre(trois);
    Biblio.addLivre(quatre);
    Biblio.addLivre(cinq);
    Biblio.addLivre(six);
    Biblio.addLivre(sept);
    Biblio.addLivre(huit);
    Biblio.addLivre(neuf);
    Biblio.addLivre(dix);
    Biblio.afficherLivres();
    cout << endl;
    Biblio.afficherLecteurs();
    cout << endl;
    Biblio.afficherAuteurs();
    cout << endl;
    cout << "Test " << endl << "Les lecteurs vont emprunter des livres " << endl << endl;
    Biblio.EmprunterLivre2(autre,"Casablanca");
    Biblio.EmprunterLivre2(moi,"Le cauchemar des gardiens");
    Biblio.EmprunterLivre2(moi,"Meurtre dans le Hamam");
    Biblio.EmprunterLivre2(autre,"Massacreur des journalistes");
    Biblio.EmprunterLivre2(moi,"I am Legend");
    autre.afficherIsbns();
    cout << endl;
    moi.afficherIsbns();
    cout << endl;
    moi.afficherTitLect();
    cout << endl << "Les livres qui restent en Biblio" << endl;
    Biblio.afficherLivres();
    Biblio.RestituerLivre(moi,"Meurtre dans le Hamam",cinq);
    Biblio.RestituerLivre(moi,"I am Legend",deux);
    cout << endl;
    moi.afficherIsbns();
    cout << endl;
    autre.afficherIsbns();
    cout << endl;
    Biblio.afficherLivres();
    cout << endl;
    Biblio.afficherLivresAuteur();
    cout << endl;
    Biblio.afficherLivresLecteur(moi);
    cout << endl;
    Biblio.pourcentage(Biblio);
    cout << endl;
    return 0;
}
