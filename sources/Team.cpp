#include "Team.hpp"
#include <iostream>
#include <cmath>

Team::Team(Character* lead){
    this -> lead = lead;
    //players.push_back(captain);
}

void Team::add(Character* new_player){
    //this -> numberMembers += 1;
}

void Team::attack(Team* enemy) {
}

int Team::stillAlive(){
    //return this -> numberMembers;
    return 0;
}

void Team::print(){
}