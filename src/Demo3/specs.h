//
// Created by Daniel on 2022. 10. 04..
//

#ifndef DEMO3_SPECS_H
#define DEMO3_SPECS_H

#pragma once
#include <string>

class Specs {
public:
    Specs(int a, int f, int s);
    Specs();

    void choose_color();
    void min_alt();
    void min_airspeed();
    void fuel_cap();
    int get_alt();
    int get_speed();
    int get_fuel();

    void set_alt(int a);
    void set_speed(int s);
    void set_fuel(int f);

    bool isNumber(std::string str);

private:
    int alt;
    int speed;
    int fuel;
};


#endif //DEMO3_SPECS_H
