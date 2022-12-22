#include "Sommet.h"

Sommet:: Sommet(){}


Sommet::Sommet(int num_sommet, std::string nom_sommet, int altitude)
{
m_num_sommet=num_sommet;
m_nom_sommet=nom_sommet;
m_altitude=altitude;
}
void Sommet::afficher_sommet()
{
    std::cout<< "numero : " << m_num_sommet << "  ";
     std::cout<< "nom : " << m_nom_sommet<< "  ";
     std::cout<< "altitude : " << m_altitude<< "  ";

}
