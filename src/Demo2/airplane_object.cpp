//
// Created by Daniel on 2022. 10. 04..
//

#include <iostream>
#include <string>
#include "airplane_object.hpp"

Airplane::Airplane() {
    crew.num = 2;
    crew.captain_name = "Captain";
    crew.copilot_name = "CoPilot";
}

void Airplane::takeOff() {
    if (crew.num >= 1) {
        std::cout << "Takeoff!" << std::endl;
    } else {
        std::cout << "Nobody to fly the plane!" << std::endl;
    }
    return;
}

void Airplane::fire() {
    crew.num -= 1;
    std::cout << "You're out of here!" << std::endl;
    return;
}

void Airplane::hire() {
    crew.num += 1;
    std::cout << "Welcome onboard!" << std::endl;
    return;
}

void Airplane::interact() {
    std::string input = "";
    std::getline(std::cin, input);
    int input_len = input.length();
    if (input.empty()) {
        std::cout << "No command." << std::endl;
    } else {
        int i = 0;
        while (input[i] != 'q' and i < input_len) {
            std::cout << "i = " << i << " input[i] =" << input[i] << std::endl;
            if (input[i] == 't') {
                takeOff();
            } else if (input[i] == 'l') {
                if (crew.num == 0) {
                    abort();
                }
                land();
            } else if (input[i] == 'h') {
                hire();
            } else if (input[i] == 'f') {
                fire();
            }
            i++;
        }
    }
    return;
}

void Airplane::land() {
    if (crew.num >= 1) {
        std::cout << "Landed safely" << std::endl;
    } else {
        std::cout << "Nobody left to land the plane!" << std::endl;
    }
    return;
}