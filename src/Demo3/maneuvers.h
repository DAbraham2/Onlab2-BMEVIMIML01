//
// Created by Daniel on 2022. 10. 04..
//

#ifndef DEMO3_MANEUVERS_H
#define DEMO3_MANEUVERS_H

#pragma once

#include "sys_status.h"
#include "specs.h"

class Maneuvers {
public:
    Maneuvers(Specs* s, Sys_Status* ss);
    void hover();
    void steep_approach(int speed);
    void quick_stop();

private:
    Specs* spec;
    Sys_Status* sys;
};


#endif //DEMO3_MANEUVERS_H
