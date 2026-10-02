#include "pocketmon.hpp"
#include <iostream>

int main() {
  std::string starter = "";
  std::string func = "";
  Pokemon *chosen = nullptr;
  std::cout << "Choose your starter pokemon!" << std::endl;
  std::cout << "(Charmander)|(Squirtle)|(Bulbasaur): ";
  while (starter != "Quit") {
    std::cin >> starter;
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
      std::cout << "Please choose a Pokemon as shown: ";
      continue;
    }
  }
  while (func != "Quit") {
    std::cout << "Do you want to attack (Attack), check type (Type), or quit "
                 "(Quit)? ";
    std::cin >> func;
    if (func == "Attack") {
      chosen->Attack();
    } else if (func == "Type") {
      chosen->returnType();
    } else if (func == "Quit") {
      return 0;
    } else {
      std::cout << "Please pick an option as shown: ";
      continue;
    }
  }
  delete chosen;
  return 0;
}
