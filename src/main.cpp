#include "../include/pocketmon.hpp"
#include <iostream>

int main() {
  Pokemon Pikachu("Pikachu", "Electric", "Thunderbolt", 60, "Electric");
  std::cout << Pikachu.action() << std::endl;
  std::cout << Pikachu.returnType() << std::endl;
  std::cout << Pikachu.move.moveType.typeName << std::endl;
  return 0;
}
