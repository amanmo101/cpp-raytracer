#ifndef VEC3_H
#define VEC3_H

#include <cmath>

class vec3 {
    public: 
        double e[3];
        vec3() { e[0] = 0.0; e[1] = 0.0; e[2] = 0.0;}
        vec3(double e0, double e1, double e2) { e[0] = e0; e[1] = e1; e[2] = e2; }       
        double x() const {return e[0]; }
        double y() const {return e[1]; }
        double z() const {return e[2]; }
        double length() const { 
            return std::sqrt(e[0] * e[0] + e[1] * e[1] + e[2] * e[2]); }
        inline vec3 operator+(const vec3& x, const vec3& y){
            return vec3(x.e[0] + y.e[0], x.e[1] + y.e[1], x.e[2] + y.e[2]);
        }
        inline vec3 operator*(double t, const vec3& v) {
         return vec3(t * v.e[0], t * v.e[1], t * v.e[2]);
        }
        inline double dot(const vec3& u, const vec3& v) {
            return u.e[0] * v.e[0] + u.e[1] * v.e[1] + u.e[2] * v.e[2];
        }
};

#endif