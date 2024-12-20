#ifndef DERIVE_H
#define DERIVE_H

#include "base.h"

class derive : public base {
public:
    derive(int a, float b, int d) : base(a, b), d(d) {}
    ~derive() override = default; // Ajouter un destructeur virtuel
    void display_results() const override; // Surcharge explicite avec override

    int get_d() const { return d; }
    void set_d(int new_d) { d = new_d; }

private:
    int d; // Attribut propre à la classe dérivée
};

#endif // DERIVE_H
