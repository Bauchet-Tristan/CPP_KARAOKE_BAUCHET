#include <iostream> // Include de base presente partous
#include <vector>
#include <string>
#include "Player.cpp"
#include "Karaoke.cpp"

using namespace std; // Ligne de base pour utiliser l'espace de nom std (la ou se trouve des info utiliser par les include et autres)


////////////////////// Fonction pour les tableau Dynamique ////////////////////////


int main()
{
    string nomPlayer ="";
    cout <<"ecrire un nom"<<endl;
    cin >> nomPlayer;
    Player Player1 = Player(nomPlayer);

    for(int i = 0; i < 6; i++)
    {
        Player1.creatScore();
        cout << endl;
        Player1.getBestScore();
        Player1.getWorstScore();
        Player1.getAverageScore();
    }

    Karaoke Karaoke1 = Karaoke(1,"black and white");

    cout <<"\nLe nom de la music est "<< Karaoke1.getMusicName();
}