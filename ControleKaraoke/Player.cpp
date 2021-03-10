// Implemente (implementer = accolade {}) la classe de Escargot, ecrire le code des methodes (ecrire ce qu'elle font avec les "variables")
#include <iostream> // Include de base presente partous
#include <vector>
#ifndef PLAYER
#define PLAYER
#include "Player.h"
#endif


std::string Player::getNom() // 1
{
    return _pseudo;
}

int Player::creatScore() // 1
{
    if(_chanson<=5)
    {
        std::cout << this->getNom();
        std::cout << " Tu veut quel score en CHIFFRE ??";
        
        std::cin >> _score;
        std::cout << std::endl;

        if(_score<50)
        {
            _score = 50;
        }
        else if (_score>100)
        {
            _score = 100;
        }

        if (_score>_bestScore)
        {
            _bestScore=_score;
            _bestChanson= _chanson;
            std::cout <<"le meilleur score est changer"<<std::endl;
        }

        if (_score<_worstScore)
        {
            _worstScore=_score;
            _worstChanson= _chanson;
            std::cout <<"le pire score est changer"<<std::endl;
        }

        if(_chanson == 0)
        {
            _score1=_score;
        //    std::cout <<"Score 1 est enregistrer"<<std::endl;
        }
        else if(_chanson == 1)
        {
            _score2=_score;
         //   std::cout <<"Score 2 est enregistrer"<<std::endl;
        }
        else if(_chanson == 2)
        {
            _score3=_score;
         //   std::cout <<"Score 3 est enregistrer"<<std::endl;
        }
        else if(_chanson == 3)
        {
            _score4=_score;
          //  std::cout <<"Score 4 est enregistrer"<<std::endl;
        }
        else if(_chanson == 4)
        {
            _score5=_score;
           // std::cout <<"Score 5 est enregistrer"<<std::endl;
        }
        
        _chanson++;
 
    }
    else
    {
        std::cout <<"\n ta trop chanté tu ne peut pas avoir plus de 5 score..."<< std::endl;
    }

    return _score;
}



int Player::getBestScore() // 1
{
    std::cout << "Le meilleur score de "<< this->getNom() << " a été realiser sur la chanson numero ";
    std::cout <<_bestChanson<<" il est de "<< _bestScore << std::endl;
    return _score;
}

int Player::getWorstScore() // 1
{
    std::cout << "Le Pire score de "<< this->getNom() << " a été realiser sur la chanson numero ";
    std::cout <<_worstChanson<<" il est de "<< _worstScore << std::endl;
    return _score;
}



int Player::getAverageScore() // 1
{   
    if(_chanson == 1)
    {
        _averageScore=_score1;
        std::cout <<"Moyenne jusqu'au Score 1 est de ";
    }
    else if(_chanson == 2)
    {
        _averageScore=(_score1 + _score2)/2;
        std::cout <<"Moyenne jusqu'au Score 2 est de ";
    }
    else if(_chanson == 3)
    {
        _averageScore=(_score1 + _score2 + _score3)/3;
        std::cout <<"Moyenne jusqu'au Score 3 est de ";
    }
    else if(_chanson == 4)
    {
        _averageScore=(_score1 + _score2 + _score3 +_score4)/4;
        std::cout <<"Moyenne jusqu'au Score 4 est de ";
    }
    else
    {
        _averageScore=(_score1 + _score2 + _score3 +_score4+_score5)/5;
        std::cout <<"Moyenne jusqu'au Score 5 est de ";
    }
    
    std::cout << _averageScore<<std::endl;
    return _averageScore;
}


std::string Player::toString() // en generale sert a afficher les caracteristique de l'objet
{
    this->getNom();
    return 0;
}



Player::Player(std::string name) : _pseudo(name)
{

}

