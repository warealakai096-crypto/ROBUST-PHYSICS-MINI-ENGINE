#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class Vector3 {
public:    double x, y, z;
    Vector3();
    Vector3(double x, double y, double z);
    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(double scalar) const;

        double length() const;

    void print( const std::string &label = "" ) const; 
    Vector3 normalized() const ;
};  



#endif // VECTOR3_H