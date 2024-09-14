#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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
  case 2:
    return "Feuille";
  case 3:
    return "Ciseaux";
  default:
    return "Choice should be 1, 2 or 3";
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
    cout << "---------------" << endl;
  }
  else if (userChoice == 1 && computerChoice == 3 || userChoice == 2 && computerChoice == 1 || userChoice == 3 && computerChoice)
  {
    cout << "Vous avez gagné !" << endl;
    cout << "---------------" << endl;
  }
  else
  {
    cout << "Vous avez perdu !" << endl;
    cout << "---------------" << endl;
  }
}

int main()
{
  int userChoice{0};
  do
  {
    displayInstructions();
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 3)
    {
      cout << "Mauvais choix, on recommence !" << endl;
    }

    if (userChoice >= 1 && userChoice <= 3)
    {
      int computerChoice = generateRandomNumber();
      displayChoices(userChoice, computerChoice);
      getResult(userChoice, computerChoice);
    }

  } while (userChoice != 0);
  return 0;
}