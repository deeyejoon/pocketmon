#include "../include/pocketmon.hpp"

std::string Pokemon::returnType() {
  return type.typeName;
}

std::string Pokemon::action(int choice) {
  return moves[choice].moveName;
}

Pokemon::Pokemon(std::string name, std::string typeName, std::string moveOne) {
  // Pokemon name initialize
  this->name = name;

  // Pokemon type name initialize
  type.typeName = typeName;
}

// TODO: add function in order for user to add moves/attacks AFTER pokemon is
// created
//  the function will take a moveName, moveType, and damage (assume zero damage
//  means it's not an attack, e.g. support move, etc.)

/*
// NOTE: Charmander:

Charmander::Charmander() {
  std::cout << std::endl << "You caught Charmander!" << std::endl;
  std::cout << "What will you name your Charmander? ";
  std::cin >> name;
  type = "Fire";
}
void Charmander::Attack() {
  std::cout << name << " uses Flamethrower!" << std::endl << std::endl;
}
void Charmander::returnType() {
  std::cout << name << "'s type is " << type << "!" << std::endl << std::endl;
}

// NOTE: Squirtle:
Squirtle::Squirtle() {
  std::cout << std::endl << "You caught Squirtle!" << std::endl;
  std::cout << "What will you name your Squirtle? ";
  std::cin >> name;
  type = "Water";
}
void Squirtle::Attack() {
  std::cout << name << " uses Water Gun!" << std::endl << std::endl;
}
void Squirtle::returnType() {
  std::cout << name << "'s type is " << type << "!" << std::endl << std::endl;
}

// NOTE: Bulbasaur:
Bulbasaur::Bulbasaur() {
  std::cout << std::endl << "You caught Bulbasaur!" << std::endl;
  std::cout << "What will you name your Bulbasaur? ";
  std::cin >> name;
  type = "Grass";
}
void Bulbasaur::Attack() {
  std::cout << name << " uses Water Gun!" << std::endl << std::endl;
}
void Bulbasaur::returnType() {
  std::cout << name << "'s type is " << type << "!" << std::endl << std::endl;
}
*/
