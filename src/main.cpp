#include "base.h"
#include "derive.h"
#include <iostream>

int main() {
    base* b = new base(10, 3.14f);
    b->somme(5, 2.5f);
    b->display_results();
    std::cout << "a = " << b->get_a() << ", b = " << b->get_b() << std::endl;
    b->set_a(15);
    b->set_b(4.0f);
    b->display_results();

    base* d = new derive(20, 6.28f, 50);
    d->somme(3, 1.0f);
    d->display_results();
    delete b; // Nettoyer la mémoire
    delete d; // Nettoyer la mémoire

    return 0;
}
