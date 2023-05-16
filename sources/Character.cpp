#include "Character.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Character::Character(string name, Point location, int hit):name(name), location(location), hit(hit){
}

Character::Character(string name, Point location):name(name), location(location){
}

string Character::getName(){
    return this -> name;
}

Point Character::getLocation(){
    return this -> location;
}

int Character::getHits()const{
    return this -> hit;
}

void Character::setLocation(Point &location){
    this -> location = location;
}

void Character::setHits(int num){
    hit += num;
    cout << hit << endl;
}

bool Character::isAlive(){
    return hit > 0;
}

double Character::distance(Character& other){
    return this->location.distance(other.getLocation());
}

void Character::hits(int num){
    cout << " hit " << endl;
}

string Character::print(){
    return "Name: " + name + ", Location: " + location.print() + ", Hit: " + to_string(hit);
}