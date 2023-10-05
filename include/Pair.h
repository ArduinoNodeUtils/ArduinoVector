#ifndef __PAIR_H__
#define __PAIR_H__

/* Lightweight implementation of STL Pair<> */

template <typename T>
struct Pair {
    T a;
    T b;

    Pair<T> operator-(const Pair& rhs) { return {a - rhs.a, b - rhs.b}; }
    Pair<T> operator+(const Pair& rhs) { return {a + rhs.a, b + rhs.b}; }
};

template <typename T>
Pair<T>& operator*(const float lhs, const Pair<T>& rhs) {
    return {rhs.x * lhs, rhs.y * lhs};
}

#endif
