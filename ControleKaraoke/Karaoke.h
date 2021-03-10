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
        std::string _musicName;

        int _nombreMusic; 
       

        

    public : 
        std::string getMusicName();
        Karaoke(int _nombre,std::string nomMusic);     
};