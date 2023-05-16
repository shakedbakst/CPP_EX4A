#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
#include <iostream>
//#include <string>

using namespace std;
namespace ariel{};

class Cowboy : public Character {
private:
    int bullets;

public:
    Cowboy(std::string name, Point location);
    void shoot(Character* enemy);
    bool hasBullets();
    void reload();
};

#endif  // COWBOY_HPP
