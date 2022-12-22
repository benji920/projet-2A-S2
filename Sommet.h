#ifndef SOMMET_H
#define SOMMET_H
#include <string>
#include <iostream>

class Sommet
{
    public:
        Sommet(int num_sommet, std::string nom_sommet, int altitude);
        void SetNum(int num){m_num_sommet=num;};
        void SetNom(std::string nom){m_nom_sommet=nom;};
        void SetAltitude(int altitude){m_altitude=altitude;};
        void afficher_sommet();
        Sommet();
    private:
        int m_num_sommet;
        std::string m_nom_sommet;
        int m_altitude;
       // std::vector<Sommet*> m_successeurs;

};

#endif // SOMMET_H
