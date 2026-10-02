#pragma once
#include <string>
using namespace std;

class Pokemon {
protected:
  string name;
  string type;

public:
  virtual void returnType() = 0;
  virtual void Attack() = 0;
  virtual ~Pokemon() = default;
};

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
