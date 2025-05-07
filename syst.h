#ifndef SYST_H
#define SYST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Planete {
    char nom [50];
    float distance; // Float plus précis que int pour la distance
    Struct Satellites *satellites;
    struct Planete *suivant;
    struct Planete *precedent;
} Planete;

typedef struct Satellite {
    struct Planete *associé;
    char nom [50];
} Satellite;

typedef struct Systeme {
    struct Planete *premier;
    // compteur pas très utile finalement donc on le supprime
} Systeme;

Systeme * init_systeme(Systeme *syst); // la plupart des pointeurs on été oubliés dans l'autre copie possiblement du en partie au stresse
Planete * ajt_Planete(Systeme *syst);
Satellite * ajt_Satellite(Planete *astre, Satellite *sat);
void afficher_syst(Systeme *syst);
void supprimer_planete(Systeme *syst);
void supprimer_satellite(Planete *astre);
void trier_systeme(Systeme *syst); // sera faite en dernier


#endif