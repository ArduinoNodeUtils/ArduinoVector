#ifndef __VEC3_H__
#define __VEC3_H__

/* Lightweight implementation of STL Pair<> */

template <class T>
struct Vec3 {

public:
	union { T x, r, s; };
	union { T y, g, t; };
	union { T z, b, p; };

	Vec3() {}

	Vec3(T v1, T v2, T v3) 
      :x(v1), y(v2), z(v3) {}
    
    //use default values for copy construction and assignment
    
    //T x() { return val_1; }
    //const T first() const {return val_1; }
    //
    //T second() { return val_2; }
    //const T second() const {return val_2; }

};

#endif
