#include "Vector3.h"
#include <iostream>

// Constructor definitions

// operator+ definition
// operator- definition
// operator* definition

// length() definition

// print() definition

// getVector() definition

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(double scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

void Vector3::print( const std::string &label ) const {
    if (!label.empty()) {
        std::cout << label << ": ";
    }
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;

}

