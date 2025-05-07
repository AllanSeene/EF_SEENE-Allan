#include "syst.h"

Systeme * init_systeme(Systeme *syst){

    Systeme *syst = malloc(sizeof(Systeme));
    if (syst == NULL) return;
    return syst;
}

Planete * ajt_Planete(Systeme *syst){
    if (syst == NULL) return;
    


}

Satellite * ajt_Satellite(Planete *astre, Systeme *syst){
    if (syst == NULL || astre == NULL) return;


}

void afficher_syst(Systeme *syst){
    if (syst == NULL) return;


}

void supprimer_planete(Systeme *syst){
    if (syst == NULL) return;

}

void supprimer_satellite(Planete *astre, Systeme *syst){ // ajout du Systeme pour vérification
    if (syst == NULL || astre == NULL) return;

}