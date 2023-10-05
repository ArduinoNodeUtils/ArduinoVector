#ifndef __VEC4_H__
#define __VEC4_H__

template <class T>
struct Vec4 {

public:

	union { T w, r, s; };
	union { T x, g, t; };
	union { T y, b, p; };
	union { T z, a, q; };

	Vec4(T v1, T v2, T v3, T v4) 
      :w(v1), x(v2), y(v3), z(v4) {}
    
    //use default values for copy construction and assignment
    
    //T x() { return val_1; }
    //const T first() const {return val_1; }
    //
    //T second() { return val_2; }
    //const T second() const {return val_2; }

};

#endif
