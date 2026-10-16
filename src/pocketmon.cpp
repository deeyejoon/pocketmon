#include "../include/pocketmon.hpp"

std::string Pokemon::returnType() {
  return type.typeName;
}

std::string Pokemon::action() {
  return move.moveName;
}

Pokemon::Pokemon(std::string name, std::string typeName, std::string moveOne,
                 int moveDamage, std::string moveType) {
  // Pokemon name initialize
  this->name = name;

  // Pokemon type name initialize
  type.typeName = typeName;

  // Pokemon move initialize
  move.moveName = moveOne;
  move.damage = moveDamage;
  move.moveType.typeName = moveType;
}

// TODO: add function in order for user to add moves/attacks AFTER pokemon is
// created
//  the function will take a moveName, moveType, and damage (assume zero damage
//  means it's not an attack, e.g. support move, etc.)
//  10/14: actually nevermind for now, will initialize pokemon in program not
//  through user
