#include <iostream>
#pragma once

class Distance
{
private:
    int feet_;
    float inches_;

public:
    Distance() : feet_(0), inches_(0) {}
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
    ~Distance(){}
    // Getter & Setters
    int feet() const {return feet_;}
    void set_feet(int feet)  {feet_ = feet;}

    float inches() const {return inches_;}
    void set_inches(float inches)  {inches_ = inches;}
    // Other Methods
    void ShowDist() const;

    void update_distance(int ft, float in) {feet_=ft; inches_=in;}

    Distance operator + (Distance rhs) const;
    Distance operator - (Distance rhs) const;
    friend std::ostream& operator <<(std::ostream& os, const Distance& distance);
};
