#pragma once
#include <string>
#include <vector>

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
  Type type;
  std::vector<Move> moves;

  Pokemon(std::string name, std::string typeName, std::string moveOne);
  std::string returnType();
  std::string action(int choice);
  virtual ~Pokemon() = default;
};

/*
class Charmander : public Pokemon {
public:
  Charmander();
  void Attack() override;
  void returnType() override;
};

class Squirtle : public Pokemon {
public:
  Squirtle();
  void Attack() override;
  void returnType() override;
};

class Bulbasaur : public Pokemon {
public:
  Bulbasaur();
  void Attack() override;
  void returnType() override;
};
*/
