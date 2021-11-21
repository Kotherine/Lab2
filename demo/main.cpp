#include <investigation.hpp>

int main() {
  Investigation Direction = Investigation("direction");
  Direction.direction();
  Direction.print(cout);
  Investigation Reverse = Investigation("reverse");
  Reverse.reverse();
  Reverse.print(cout);
  Investigation Random = Investigation("random");
  Random.random();
  Random.print(cout);
}