#ifndef TEAM_HPP
#define TEAM_HPP

//#include "Character.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"

#include <iostream>
#include <vector>
//#include <cmath>


using namespace std;
namespace ariel{};

class Team {
private:
    Character* lead;
    std::vector<Character*> players;

public:
    Team(Character* lead);
    void add(Character* new_player);
    void attack(Team* enemy);
    int stillAlive();
    void print();
};

#endif  // TEAM_HPP
