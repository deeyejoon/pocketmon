#include "pocketmon.hpp"
#include <iostream>

int main() {
  string starter = "";
  string func = "";
  Pokemon *chosen = nullptr;
  cout << "Choose your starter pokemon!" << endl;
  cout << "(Charmander)|(Squirtle)|(Bulbasaur): ";
  while (starter != "Quit") {
    cin >> starter;
    if (starter == "Charmander") {
      chosen = new Charmander();
      break;
    } else if (starter == "Squirtle") {
      chosen = new Squirtle();
      break;
    } else if (starter == "Bulbasaur") {
      chosen = new Bulbasaur();
      break;
    } else {
      cout << "Please choose a Pokemon as shown: ";
      continue;
    }
  }
  while (func != "Quit") {
    cout << "Do you want to attack (Attack), check type (Type), or quit "
            "(Quit)? ";
    cin >> func;
    if (func == "Attack") {
      chosen->Attack();
    } else if (func == "Type") {
      chosen->returnType();
    } else if (func == "Quit") {
      return 0;
    } else {
      cout << "Please pick an option as shown: ";
      continue;
    }
  }
  delete chosen;
  return 0;
}
