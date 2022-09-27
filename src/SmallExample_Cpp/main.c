#include "get_sign.h"
#include <iostream>
#include <cassert>

int main()
{
    int number;

    if (std::cin >> number)
    {
        std::string arr = "Hello";

        if (number == 0)
        {
            assert(0 != number);
            return 1 / number;
        }

        if (number < 0)
        {
            assert(number > 0);
            return (int)arr[number];
        }

        assert(number < 5);
        return (int)arr[number];
    }
    else
    {
        abort();
    }
}