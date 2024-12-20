#include "base.h"
#include <iostream>

int base::somme(int f, float c) {
    this->c = f + static_cast<int>(c);
    return a + this->c;
}

void base::display_results() const {
    std::cout << "Résultats base : " << a << ", " << b << ", " << c << std::endl;
}
