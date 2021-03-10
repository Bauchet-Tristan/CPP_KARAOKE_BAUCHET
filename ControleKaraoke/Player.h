// le fichier "".h" = Declaration (declaration égale ;)de la class (ecrire les "variables")
#include <string>

class Player
{
    private:
        std::string _pseudo;   // On met le std:: car on ne doit pas utiliser "using namespace std;" sous penne de crée des bug dans le future
        int _chanson = 0;
        int _bestChanson;
        int _worstChanson;
        int _bestScore;
        int _worstScore;
        int _averageScore;
        int _score;
        int _score1;
        int _score2;
        int _score3;
        int _score4;
        int _score5;

    public : 
        
        std::string getNom(); 
        int getBestScore();
        int getWorstScore();
        int getAverageScore();
        int creatScore();
  
        std::string toString(); //  sert en generale afficher les caracteristique de l'objet
        void afficher();

        Player(std::string name); 
};