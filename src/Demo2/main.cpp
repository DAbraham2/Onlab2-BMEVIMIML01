#include <iostream>
#include "airplane_object.hpp"

int main(int argc, char *argv[]) {
    if (argc != 1) {
        std::cout << "Error" << std::endl;
    } else {
        std::cout << std::endl << "Input a string make of the following characters: 't', 'l', 'h', and 'f'"
                  << std::endl;
        std::cout << "Any / all other character will be ignored. 'q' quits thee application." << std::endl;
        std::cout << "t == takeoff, l == landing, h == hire a crew member, f == fire one." << std::endl;
        auto *my_plane = new Airplane();
        my_plane->interact();
        delete my_plane;
    }

    return 0;
}
