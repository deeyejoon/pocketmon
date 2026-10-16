#pragma once
#include <string>

class Type {
public:
  std::string typeName;
  // NOTE:: Add type weaknesses and strengths later
  //  regular effective, super effective, not effective, no effect
};

class Move {
public:
  std::string moveName;
  int damage;
  Type moveType;
};

class Pokemon {
public:
  std::string name;
  // NOTE: for multiple types in future
  //  Type arr[2];
  Type type;
  // NOTE: for multiple moves in future
  //  std::vector<Move> moves;
  Move move;

  Pokemon(std::string name, std::string typeName, std::string moveOne,
          int moveDamage, std::string moveType);
  std::string returnType();
  std::string action();
  virtual ~Pokemon() = default;
};
