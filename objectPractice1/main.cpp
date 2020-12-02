#include <iostream>

using namespace std;

class point {
 public:
  // constructor
  point(int32_t x, int32_t y, uint32_t maxMove) {
    this->x = x;
    this->y = y;
    this->maxMove = maxMove;
  }

  void display() { cout << "(" << x << ", " << y << ")" << endl; }

  void moveUp(uint32_t distance) {
    y += checkedDistance(distance);
  }

  void moveDown(uint32_t distance) {
    y -= checkedDistance(distance);
  }

  void moveRight(uint32_t distance) {
    x += checkedDistance(distance);
  }

  void moveLeft(uint32_t distance) {
    x -= checkedDistance(distance);
  }

  void swap() {
    int32_t temp = x;
    x = y;
    y = temp;
  }

 private:
  int32_t x;
  int32_t y;
  uint32_t maxMove;

  uint32_t checkedDistance(uint32_t distance) {
    if(distance > maxMove) {
      return maxMove;
    }
    return distance;
  }
};

int32_t main() {
  point p1(2, 3, 5);
  point p2(4, 5, 2);
  p1.display();
  p2.display();

  p2.moveRight(15);

  p1.display();
  p2.display();

  p2.swap();

  p1.display();
  p2.display();

  return 0;
}
