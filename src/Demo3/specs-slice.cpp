//
// Created by Daniel on 2022. 10. 04..
//
#include "specs.h"

int main(int argc, char** argv){
    Specs spec(505,110,50);


    #ifdef __AFL_HAVE_MANUAL_CONTROL
        __AFL_INIT();
    #endif

    spec.choose_color();
    //spec.min_alt();

    return 0;
}