#include <iostream>
#include "specs.h"
#include "sys_status.h"
#include "maneuvers.h"

int main() {
    Specs* s = new Specs();

    s->choose_color();
    s->min_alt();
    s->min_airspeed();
    s->fuel_cap();

    Sys_Status sys(s);

    Maneuvers man(s, &sys);

    man.hover();
    man.quick_stop();

    return 0;
}
