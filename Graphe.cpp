#include "Graphe.h"
#include <vector>



Graphe::Graphe()
{
    //ctor
}
void Graphe:: calcul_temps(){
    int temps=0;
    int altitude=0;
for (auto elem : m_trajets){
        std::string type = elem->getType();
std::string nomTrajet=elem->getNomTrajet();

    if (type=="N"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(1.2*altitude);
elem->setTemps(temps);
    }
    else if (type=="R"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(1.8*altitude);
elem->setTemps(temps);
    }
    else if (type=="B"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(2.4*altitude);
elem->setTemps(temps);
    }
        else if (type=="V"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(3*altitude);
elem->setTemps(temps);
    }
        else if (type=="KL"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(0.1*altitude);
elem->setTemps(temps);
    }
        else if (type=="SURF"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(6*altitude);
elem->setTemps(temps);
    }
        else if (type=="TPH"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(241.2*altitude);
elem->setTemps(temps);
    }
        else if (type=="TC"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(121.8*altitude);
elem->setTemps(temps);
    }
        else if (type=="TSD"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(61.8*altitude);
elem->setTemps(temps);
    }
            else if (type=="TS"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(61.4*altitude);
elem->setTemps(temps);
    }
                else if (type=="TK"){
altitude = (m_sommets[elem->getDebut()])-(m_sommets[elem->getFin()]);
temps=(61.4*altitude);
elem->setTemps(temps);
    }
else if (type=="BUS"){
if(nomTrajet=="navette2000-1600" || nomTrajet=="navette1600-2000"){
elem->setTemps(2400);
}
else if(nomTrajet=="navette1600-1800" || nomTrajet=="navette1800-1600"){
    elem->setTemps(1800);

}
    }
}
}

void Graphe::choixTrajet(std::string nom_Trajet){//On choisit un nom de trajet, pour connaitre le debut et la fin du trajet
std::cout<<"Vous avez choisi le trajet : "<<nom_Trajet<<std::endl;
for (auto elem : m_trajets){
if(elem->getNomTrajet()==nom_Trajet){
    std::cout<<"Le depart est : "<<elem->getDebut()<<" et l'arrivee est : "<<elem->getFin()<<std::endl;
}

}

}

void Graphe::choixPoint(int nom_Point){//On choisit un point pour savoir par quels trajets on y accède et comment en partir
std::cout<<"Vous avez choisi le point : "<<nom_Point<<std::endl;


}
void choixPoint();

void Graphe::charger(){

 std::ifstream monFlux("data_arcs.txt");  //On essaye d'ouvrir le fichier

    if(monFlux)  //On teste si tout est OK
    {
        std::cout << "fichier <graphe> charge !" << std::endl<<std::endl;


        int ordre, taille;
        int numero, altitude;
        std::string nom;


        monFlux>>ordre;
        m_ordre=ordre;


        for (int i=1; i<=m_ordre; i++)//On parcourt le nombre d'aretes
        {
            monFlux>>numero>>nom>>altitude;
            m_sommets.push_back(new Sommet(numero,nom,altitude));


        }
        monFlux>>taille;
        m_taille=taille;
        std::string nom_trajet,type;
        int num_trajet,debut,fin;
        for(int i=1;i<=m_taille;i++){

            monFlux>>num_trajet>>nom_trajet>>type>>debut>>fin;
            m_trajets.push_back(new Trajet(num_trajet,nom_trajet,type,debut,fin));
        }
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
    }


}

void Graphe::afficher()
{
    for (auto elem:m_sommets)
        {elem->afficher_sommet();
        std::cout<<std::endl;}
}
