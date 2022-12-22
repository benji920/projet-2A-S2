#include <iostream>
#include "Graphe.h"
#include "Sommet.h"
#include "Trajet.h"

int main()
{
    Graphe G;
    G.charger();

G.afficher();
    int choix=0;
std::cout<<"Bonjour ! Bienvenue a la station des Arcs !"<<std::endl;
      std::cout<<" Vous pouvez :"<<std::endl;
      std::cout<<"1. Choisir Trajet"<<std::endl;
            std::cout<<"2. Choisir Point"<<std::endl;


   std::cout<<"Que voulez-vous faire ? "<<std::endl;
   std::cin>>choix;
   switch(choix)
   {
   case 1 :
    G.choixTrajet("carreley");
    break;

   case 2 :
    G.choixPoint(4);
    break;

   }

    return 0;
}
