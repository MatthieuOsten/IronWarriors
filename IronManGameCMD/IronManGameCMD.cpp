// IronManGameCMD.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Menu.h"
#include "Damageable.h"

using namespace std;

int main()
{
    Menu mainMenu;

    int enter = 1;

    Damageable robotOne("Robot1",10), robotTwo("Robot2",10);

    do {
        cout << robotOne.GetName() << ((robotOne.GetHealth() > 0) ? " is good " : " is dead ") << endl;
        cout << "     Health : " << robotOne.GetHealth() << endl;
        cout << "     HealthMax : " << robotOne.GetMaxHealth() << endl;
        cout << robotTwo.GetName() << ((robotTwo.GetHealth() > 0) ? " is good " : " is dead ") << endl;
        cout << "     Health : " << robotTwo.GetHealth() << endl;
        cout << "     HealthMax : " << robotTwo.GetMaxHealth() << endl;
        cin >> enter;

        switch (enter)
        {
        case 1:
            robotOne.TakeDamage(2);
            cout << "/!\\ RobotOne Take 2 damage /!\\" << endl;
            break;
        case 2:
            robotOne.Heal(2);
            cout << "/!\\ RobotOne Take 2 heal /!\\" << endl;
            break;
        default:
            break;
        }

    } while (enter > 0);

    mainMenu.Display();

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
