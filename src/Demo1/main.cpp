#include <iostream>

int main() {
    std::string str;
    std::cout << "enter input string";

    std::getline(std::cin, str);

    std::cout << str << std::endl << str[0] << std::endl;

    if (str[0] == 0 || str[str.length() - 1] == 0) {
        abort();
    } else {
        int count = 0;
        char prev_num = 'x';
        while (count != str.length() - 1) {
            char c = str[count];
            if (c >= 48 && c <= 57) {
                if (c == prev_num + 1) {
                    abort();
                }
                prev_num = c;
            }
            count++;
        }
    }
    return 0;
}
