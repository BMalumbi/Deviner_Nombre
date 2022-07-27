#include <stdlib.h>
#include "utils.h"
int genererNombreAlea(int borneSup)
{
    int nbAlea;
    nbAlea = rand()% (borneSup +1);

    return nbAlea;
}
