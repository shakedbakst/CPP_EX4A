#include "Cowboy.hpp"
#include <iostream>

Cowboy::Cowboy(string name, Point location) : Character(name, location){
}

void Cowboy::shoot(Character* enemy){
}

bool Cowboy::hasBullets(){
    return bullets > 0;
}

void Cowboy::reload(){
    this -> bullets += 6;
} 