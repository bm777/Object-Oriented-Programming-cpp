#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
    //creation des personnage
    Personnage david, goliath("Epée aiguisée", 20);

    //le jeu dattaque
    goliath.attaquer(david);        //goliath attaque david
    david.boirePotionDeVie(20);     //David a m_vie = 20
    goliath.attaquer(david);        //goliath attaque encore david
    david.attaquer(goliath);        //le tour de david d'attaquer
    goliath.changerArme("Doublz hache tranchante vénéneuse de la mort", 40); //golitath change darme
    goliath.attaquer(david);

    //Temps fort
    cout << "David" << endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();
    return 0;
}
