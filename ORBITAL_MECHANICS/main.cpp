#include "Vector3.h"
#include <iostream>

double distance(const Vector3& a, const Vector3& b) {
    return (a - b).length();
}

int main() {
    std::cout << "Hello, Orbital Mechanics!" << std::endl;

    Vector3 a(3,4,0);
    Vector3 b(-2,1,0);

    Vector3 c = a + b;
    c.print("a + b");

    std::cout << "length of a: " << a.length() << "\n";
    std::cout << "length of b: " << b.length() << "\n";

    // ⭐ Practice Problem 4: Normalization
    Vector3 n = a.normalized();
    n.print("normalized a");
    std::cout << "length of normalized a: " << n.length() << "\n";

    return 0;
}
