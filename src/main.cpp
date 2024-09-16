#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void displayInstructions();
int generateRandomNumber();
string transformChoiceIntoString(int choice);
void displayChoices(int userChoice, int computerChoice);
void getResult(int userChoice, int computerChoice);

int main()
{
  int userChoice{0};
  std::srand(std::time(0));
  do
  {
    displayInstructions();
    cin >> userChoice;
    system("clear");

    if (userChoice < 0 || userChoice > 3)
    {
      cout << "Choix invalide, recommencez !" << endl;
    }

    else if (userChoice == 0)
    {
      cout << "Fin du jeu !" << endl;
    }
    else
    {
      int computerChoice = generateRandomNumber();
      displayChoices(userChoice, computerChoice);
      getResult(userChoice, computerChoice);
    }

  } while (userChoice != 0);
  return 0;
}

void displayInstructions()
{
  cout << "Choisissez l'une des options suivantes : " << endl;
  cout << "-- 0 = Quitter le jeu" << endl;
  cout << "-- 1 = Pierre" << endl;
  cout << "-- 2 = Feuille" << endl;
  cout << "-- 3 = Ciseaux" << endl;
  cout << "Tapez votre choix puis appuyez sur Entrée : ";
}

int generateRandomNumber()
{
  return rand() % 3 + 1;
}

string transformChoiceIntoString(int choice)
{
  switch (choice)
  {
  case 1:
    return "Pierre";
    break;
  case 2:
    return "Feuille";
    break;
  case 3:
    return "Ciseaux";
    break;
  default:
    return "Choix invalide";
    break;
  }
}

void displayChoices(int userChoice, int computerChoice)
{
  cout << "Vous avez joué : " << transformChoiceIntoString(userChoice) << endl;
  cout << "L'ordinateur a joué : " << transformChoiceIntoString(computerChoice) << endl;
}

void getResult(int userChoice, int computerChoice)
{
  if (userChoice == computerChoice)
  {
    cout << "Egalité !" << endl;
  }
  else if (userChoice == 1 && computerChoice == 3 || userChoice == 2 && computerChoice == 1 || userChoice == 3 && computerChoice == 2)
  {
    cout << "Vous avez gagné !" << endl;
  }
  else
  {
    cout << "Vous avez perdu !" << endl;
  }
}