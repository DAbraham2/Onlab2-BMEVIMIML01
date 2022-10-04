//
// Created by Daniel on 2022. 10. 04..
//

#ifndef DEMO2_AIRPLANE_OBJECT_HPP
#define DEMO2_AIRPLANE_OBJECT_HPP

#include <string>

class Airplane {
public:
    Airplane();
    //~Airplane();

    void interact();

    void takeOff();
    void land();
    void hire();
    void fire();

private:
    struct cabin_crew{
        int num;
        std::string captain_name;
        std::string copilot_name;
    } crew;
};


#endif //DEMO2_AIRPLANE_OBJECT_HPP
