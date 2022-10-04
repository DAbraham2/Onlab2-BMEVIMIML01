//
// Created by Daniel on 2022. 10. 04..
//

#ifndef DEMO3_SYS_STATUS_H
#define DEMO3_SYS_STATUS_H

#pragma once

#include "specs.h"

class Sys_Status {
public:
    //Sys_Status();
    Sys_Status(Specs* s);

    int chekch_alt(int alt);
    int check_fuel(int fuel);
    bool check_weather();
    int check_speed(int speed);
private:
    Specs* spec;
};


#endif //DEMO3_SYS_STATUS_H
