// Implemente (implementer = accolade {}) la classe de Escargot, ecrire le code des methodes (ecrire ce qu'elle font avec les "variables")
#include <iostream> // Include de base presente partous
#include <vector>
#ifndef PLAYER
#define PLAYER
#include "Player.h"
#endif
#include "Karaoke.h"

std::string Karaoke::getMusicName()
{
    return _musicName;
}

Karaoke::Karaoke(int nombre,std::string nomMusic): _nombreMusic(nombre),_musicName(nomMusic)
{
    for(int i; i < nombre ;i++)
    {
        std::string nomPlayer ="";
        std::cout <<"ecrire un nom"<<std::endl;
        std::cin >> nomPlayer;
        _diff.push_back(new Player(nomPlayer));
    }
}

