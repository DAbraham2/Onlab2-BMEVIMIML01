#include "get_sign.h"
#include <cassert>

int get_sign(int number)
{
    char* arr = "Hello";
    if(number == 0){
        assert(number != 0);
        return 1/number;
    }

    if(number < 0){
        return arr[number];
    }
    //assert(number < 5);
    return (int)arr[number];
}