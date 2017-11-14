#pragma once

#include <iostream>

class Included {
public:
    static void Show() {
        std::cout << "\tFunction of included file show.h" << std::endl;
    }
}; /* class Included */
