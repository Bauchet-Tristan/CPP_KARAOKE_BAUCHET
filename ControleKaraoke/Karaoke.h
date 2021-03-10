// le fichier "".h" = Declaration (declaration égale ;)de la class (ecrire les "variables")

#include <string>
#include <vector>
#ifndef PLAYER
#define PLAYER
#include "Player.h"
#endif

class Karaoke
{
     private:
        std::vector<Player*> _diff ;
        int _nombreMusic; 
        

    public : 
        Karaoke(int _nombre);     
};