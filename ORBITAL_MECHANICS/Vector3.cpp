        #include "Vector3.h"
        #include <iostream>
        #include <cmath>   // Needed for std::sqrt

        // Constructors
        Vector3::Vector3() : x(0), y(0), z(0) {}
        Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

        // Operator Overloads
        Vector3 Vector3::operator+(const Vector3& other) const {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }

        Vector3 Vector3::operator-(const Vector3& other) const {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }

        Vector3 Vector3::operator*(double scalar) const {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }

        // Magnitude / Length
        double Vector3::length() const {
            return std::sqrt(x * x + y * y + z * z);
        }

        // Utility
        void Vector3::print(const std::string &label) const {
            if (!label.empty()) {
                std::cout << label << ": ";
            }
            std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
        }
        
    Vector3 Vector3::normalized() const { 
            double len = length();
            if (len == 0) {
                return Vector3(0, 0, 0); // Return zero vector if length is zero to avoid division by zero
            }
            return Vector3(x / len, y / len, z / len);
        }
