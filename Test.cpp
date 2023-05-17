#include "doctest.h"
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Point class functions") {
    Point p1(1, 2);
    Point p2(3, 4);

    CHECK_EQ(p1.getX(), 1);
    CHECK(p2.getX() == 3);

    CHECK_EQ(p1.getY(), 2);
    CHECK(p2.getY() == 4);
    
    CHECK_EQ(p1.distance(p2), 2.828427);
    CHECK(p2.distance(Point(5, 6)) == 2.828427);
    CHECK_EQ(p1.distance(p2), p2.distance(Point(5, 6)));

    Point p3(5, 5);
    Point p4(5, 5);
    CHECK_EQ(p3.distance(p4), 0.0);
}

TEST_CASE("charecters class functions") {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);
    Point p4(7, 8);

    Cowboy c("Tom", p1);
    OldNinja on("sushi", p2);
    TrainedNinja tn("Hikari", p3);
    YoungNinja yn("Yogi", p4);
    
    CHECK_EQ(c.getName(), "Tom");
    CHECK_EQ(c.getLocation().getX(), 1);
    CHECK_EQ(c.getLocation().getY(), 2);
    CHECK_EQ(c.getHits(), 110);
    CHECK_EQ(c.isAlive(), true);

    CHECK_EQ(on.getName(), "sushi");
    CHECK_EQ(on.getLocation().getX(), 3);
    CHECK_EQ(on.getLocation().getY(), 4);
    CHECK_EQ(on.getHits(), 150);
    CHECK_EQ(on.isAlive(), true);

    CHECK_EQ(tn.getName(), "Hikari");
    CHECK_EQ(tn.getLocation().getX(), 5);
    CHECK_EQ(tn.getLocation().getY(), 6);
    CHECK_EQ(tn.getHits(), 120);
    CHECK_EQ(tn.isAlive(), true);

    CHECK_EQ(yn.getName(), "Yogi");
    CHECK_EQ(yn.getLocation().getX(), 7);
    CHECK_EQ(yn.getLocation().getY(), 8);
    CHECK_EQ(yn.getHits(), 100);
    CHECK_EQ(yn.isAlive(), true);
}

TEST_CASE("Team class functions") {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);
    Point p4(7, 8);

    Cowboy c("Tom", p1);
    OldNinja on("sushi", p2);
    TrainedNinja tn("Hikari", p3);
    YoungNinja yn("Yogi", p4);

    Team team1(&c);
    Team team2(&on);

    team1.add(&tn);
    team2.add(&yn);

    CHECK_THROWS(team1.add(&tn));
	CHECK_THROWS(team2.add(&yn));

    CHECK_EQ(team1.stillAlive(), 1);
    CHECK_EQ(team2.stillAlive(), 1);

    CHECK_NOTHROW(team1.attack(&team2));

    CHECK_EQ(team1.stillAlive(), 2);
    CHECK_EQ(team2.stillAlive(), 0);
}

TEST_CASE("Ninja class functions") {
    Point p1(1, 2);
    Point p2(3, 4);
    TrainedNinja tn("Hikari", p1);
    OldNinja on("Sushi", p2);

    CHECK_EQ(tn.distance(on), 2.828427);
    CHECK_EQ(tn.getSpeed(), 12);
    CHECK_EQ(on.getSpeed(), 8);

    tn.move(&on);
    CHECK_EQ(tn.getLocation().getX(), 3);
    CHECK_EQ(tn.getLocation().getY(), 4);

    tn.slash(&on);
    CHECK_EQ(tn.getHits(), 110);
}

TEST_CASE("Shooting"){
    Point p1(1, 2);
    Point p2(3, 4);

    Cowboy c("Tom", p1);
    OldNinja on("Sushi", p2);

	CHECK_NOTHROW(c.shoot(&on));
	CHECK_EQ(on.getHits(), 90);
    CHECK_NOTHROW(c.shoot(&on));
	CHECK_EQ(on.getHits(), 50);
	
}

