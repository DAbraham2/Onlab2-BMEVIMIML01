//
// Created by Daniel on 2022. 10. 04..
//

#include <iostream>
#include "sys_status.h"

Sys_Status::Sys_Status(Specs *s) {
    spec = s;
}

int Sys_Status::chekch_alt(int alt) {
    if (alt < spec->get_alt() and alt > 0) {
        std::cout << "warning! critical altitude" << std::endl;
        alt = spec->get_alt();
    }
    if (alt < 0) {
        abort();
    }
    return alt;
}

int Sys_Status::check_fuel(int fuel) {
    if (fuel < spec->get_fuel() and fuel > 0) {
        std::cout << "warning! critical fuel level. refuel now" << std::endl;
        fuel = spec->get_fuel();
    }
    if (fuel < 0) {
        abort();
    }
    return fuel;
}

bool Sys_Status::check_weather() {
    int temp = 0 + rand() % ((100 + 1) - 0);
    if (temp < 15) {
        std::cout << "temperature low, icing possible. land immediately" << std::endl;
        return true;
    }
    return false;
}

int Sys_Status::check_speed(int speed) {
    if (speed < spec->get_speed() and speed > 0) {
        std::cout << "warning! low airspeed." << std::endl;
        speed = spec->get_speed();
    }
    if (speed < 0) {
        abort();
    }
    return speed;
}
