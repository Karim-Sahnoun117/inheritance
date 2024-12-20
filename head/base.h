#ifndef BASE_H
#define BASE_H

class base {
public:
    base(int a, float b) : a(a), b(b), c(0) {} // Initialiser c avec une valeur par défaut
    virtual ~base() = default; // Ajouter un destructeur virtuel
    virtual void display_results() const; // Marquer comme virtual
    int somme(int f, float c);

    int get_a() const { return a; }
    float get_b() const { return b; }
    void set_a(int new_a) { a = new_a; }
    void set_b(float new_b) { b = new_b; }

protected:
    int a;
    float b;
    int c; // Toujours privé/protégé pour une meilleure encapsulation
};

#endif // BASE_H
