// Write a C++ program that demonstrate working of operator overloading.
// Code generated by chat GPT
#include <iostream>

class Vector {
public:
  Vector(int x, int y) : x(x), y(y) {}

  // Overload the + operator
  Vector operator+(const Vector& v) const {
    return Vector(x + v.x, y + v.y);
  }

  // Overload the - operator
  Vector operator-(const Vector& v) const {
    return Vector(x - v.x, y - v.y);
  }

  // Overload the * operator (scalar multiplication)
  Vector operator*(int scalar) const {
    return Vector(x * scalar, y * scalar);
  }

  // Overload the += operator
  Vector& operator+=(const Vector& v) {
    x += v.x;
    y += v.y;
    return *this;
  }

  // Overload the -= operator
  Vector& operator-=(const Vector& v) {
    x -= v.x;
    y -= v.y;
    return *this;
  }

  // Overload the == operator
  bool operator==(const Vector& v) const {
    return x == v.x && y == v.y;
  }

  // Overload the != operator
  bool operator!=(const Vector& v) const {
    return !(*this == v);
  }

  // Output stream operator
  friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
  }

private:
  int x, y;
};

int main() {
  Vector v1(1, 2);
  Vector v2(3, 4);

  // Use the overloaded operators to perform operations on vectors
  Vector v3 = v1 + v2;
  Vector v4 = v3 - v2;
  Vector v5 = v1 * 2;

  std::cout << "v1 = " << v1 << std::endl;
  std::cout << "v2 = " << v2 << std::endl;
  std::cout << "v3 = " << v3 << std::endl;
  std::cout << "v4 = " << v4 << std::endl;
  std::cout << "v5 = " << v5 << std::endl;

  if (v1 == v2) {
    std::cout << "v1 is equal to v2" << std::endl;
  } else {
    std::cout << "v1 is not equal to v2" << std::endl;
  }

  if (v1 != v3) {
    std::cout << "v1 is not equal to v3" << std::endl;
  } else {
    std::cout << "v1 is equal to v3" << std::endl;
  }

  v1 += v2;
  std::cout << "v1 = " << v1 << std::endl;

  v3 -= v2;
  std::cout << "v3 = " << v3 << std::endl;

  return 0;
}
