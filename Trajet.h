#ifndef TRAJET_H
#define TRAJET_H
#include <string>
#include <iostream>

class Trajet
{
    public:
        Trajet(int num_trajet,std::string nom_trajet, std::string type,int debut, int fin);
        std::string getNomTrajet(){return m_nom_trajet;};

std::string getType(){return m_type;};
int getDebut(){return m_debut;};
int getFin(){return m_fin;};
void setTemps(int temps){m_temps=temps;};
    private:
        int m_num_trajet;
        std::string m_nom_trajet;
        std::string m_type;
        int m_debut;
        int m_fin;
        int m_temps;
};

#endif // TRAJET_H
