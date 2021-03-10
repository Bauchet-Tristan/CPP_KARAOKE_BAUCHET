// Implemente (implementer = accolade {}) la classe de Escargot, ecrire le code des methodes (ecrire ce qu'elle font avec les "variables")
#include <iostream> // Include de base presente partous
#include <vector>
#ifndef PLAYER
#define PLAYER
#include "Player.h"
#endif
#include "Karaoke.h"


Karaoke::Karaoke(int nombre): _nombreMusic(nombre)
{
     if (nombre > 13)
    {
        nombre = 13;
    }
 
     
    for(int i; i < nombre ;i++)
    {
        std::string nomPlayer ="";
        std::cout <<"ecrire un nom"<<std::endl;
        std::cin >> nomPlayer;
        _diff.push_back(new Player(nomPlayer));
    }
}

