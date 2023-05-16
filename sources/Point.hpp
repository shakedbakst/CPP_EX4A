#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

using namespace std;
namespace ariel{};

class Point {
private:
    double pt_x;
    double pt_y;

public:
    Point(double pt_x, double pt_y);
    double getX() const;
    double getY() const;
    double distance(Point pt_other);
    Point moveTowards(Point src, Point dest, double dist);
    std::string print();
};

#endif  
