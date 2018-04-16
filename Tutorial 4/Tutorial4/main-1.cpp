#include <iostream>
class Point {
private:
   int m_x;
   int m_y;
public:
   // default constructor
   Point() : m_x(0), m_y(0) {
      std::cout << "default cstor" << std::endl;
   }
   // one or two-argument constructor
   Point(int x, int y=0) : m_x(x), m_y(y) {
      std::cout << "1/2-arg cstor" << std::endl;
   }
   // copy constructor
   Point(const Point &other) : m_x(other.m_x), m_y(other.m_y) {
      std::cout << "copy cstor" << std::endl;
   }
};
int main() {
 Point u;        // ?
 Point v(1,1);   // ?
 u = v;          // ?
 Point w(1);     // ?
 Point x = 1;    // ?
 Point y = v;    // ?
 Point z(w);     // ?
}
