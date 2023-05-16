#include "Point.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(double pt_x, double pt_y){
    this -> pt_x = pt_x;
    this -> pt_y= pt_y;
}

double Point::getX()const{
    return this -> pt_x;
}

double Point::getY()const{
    return this -> pt_y;
}

double Point::distance(const Point pt_other){
    double dist_x = pt_other.getX() - pt_x;
    double dist_y = pt_other.getY() - pt_y;
    return std::sqrt((dist_x*dist_x) + (dist_y*dist_y));
}

Point Point::moveTowards(const Point src, const Point dest, double dist){
    return Point(0,0);
}

string Point::print(){
    string str = "(" + to_string(this -> pt_x) + " , " + to_string(this -> pt_y) + " )";
    return str;    
}
