#include "Ninja.hpp"
#include <iostream>

Ninja::Ninja(string name, Point location, int hit, int speed): Character(name, location, hit){
    this -> speed  = speed;
}

int Ninja::getSpeed()const{
    return this -> speed;
}

void Ninja::move(Character* enemy) {
}


void Ninja::slash(Character* enemy){
    if(isAlive()){
        if (this->getLocation().distance(enemy->getLocation()) < 1.0){
            enemy->setHits(40);
        }
    }
}

//