#ifndef GRAPHE_H
#define GRAPHE_H
#include <vector>
#include "Sommet.h"
#include "Trajet.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
class Graphe
{
    public:
        Graphe();
std::vector<Sommet*> getSommets(){return m_sommets;};
std::vector<Trajet*>  getTrajets(){return m_trajets;};

void calcul_temps();
void choixTrajet(std::string nom_Trajet);
void choixPoint(int nom_Point);
void charger();
void afficher();

    private:
        std::vector<Sommet*> m_sommets;
        std::vector<Trajet*> m_trajets; //Vecteur qui contient tous les trajets
        int m_ordre;
        int m_taille;
        int m_temps_noire;


};

#endif // GRAPHE_H
