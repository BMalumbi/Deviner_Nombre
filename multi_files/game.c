#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int devinerNombre(int nombreAlea)
{
    int nombreUser;
    printf("Deviner le nombre: ");
    scanf("%d", &nombreUser);

    if(nombreUser == nombreAlea)
    {
        printf("---BRAVO---");
        return 1;//Nombre deviné correctement
    }
    else
    {
        if(nombreUser < nombreAlea)
            printf("Nombre inferieur");
        else
            printf("Nombre superieur");
        return 0;
    }
}
void demarrerJeu()
{
    // Initialiser le générateur des nombres aléatoires
    srand(time(NULL));

    // Générer un nombre aléatoire
    int nombreAlea = genererNombreAlea(100);

    // Demander au joueur de deviner le nombre
    int resultat;
    do
    {
        resultat = devinerNombre(nombreAlea);
    }while(!resultat);
}
