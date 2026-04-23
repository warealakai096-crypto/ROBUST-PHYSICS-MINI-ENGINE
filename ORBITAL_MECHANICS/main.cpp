#include "Vector3.h"
#include <iostream>

int main() {
    Vector3 a(3,4,0);
    Vector3 b(-2,1,0);

    Vector3 c = a + b;
    c.print("a + b");

    return 0;
}
