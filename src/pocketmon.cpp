#include "pocketmon.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// NOTE: Charmander:
Charmander::Charmander() {
  cout << endl << "You caught Charmander!" << endl;
  cout << "What will you name your Charmander? ";
  cin >> name;
  type = "Fire";
}
void Charmander::Attack() {
  cout << name << " uses Flamethrower!" << endl << endl;
}
void Charmander::returnType() {
  cout << name << "'s type is " << type << "!" << endl << endl;
}

// NOTE: Squirtle:
Squirtle::Squirtle() {
  cout << endl << "You caught Squirtle!" << endl;
  cout << "What will you name your Squirtle? ";
  cin >> name;
  type = "Water";
}
void Squirtle::Attack() { cout << name << " uses Water Gun!" << endl << endl; }
void Squirtle::returnType() {
  cout << name << "'s type is " << type << "!" << endl << endl;
}

// NOTE: Bulbasaur:
Bulbasaur::Bulbasaur() {
  cout << endl << "You caught Bulbasaur!" << endl;
  cout << "What will you name your Bulbasaur? ";
  cin >> name;
  type = "Grass";
}
void Bulbasaur::Attack() { cout << name << " uses Water Gun!" << endl << endl; }
void Bulbasaur::returnType() {
  cout << name << "'s type is " << type << "!" << endl << endl;
}
