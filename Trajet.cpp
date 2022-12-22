#include "Trajet.h"

Trajet::Trajet(int num_trajet,std::string nom_trajet, std::string type,int debut, int fin)
{
    m_num_trajet=num_trajet;
    m_nom_trajet=nom_trajet;
    m_type=type;
    m_debut=debut;
    m_fin=fin;
}
