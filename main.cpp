#include <iostream>
#include <cmath>
#include "Vector.t.hpp"

using namespace std;

int main()
{
  Vector<double> v = {1.1, 1.2, 1.3, 1.4};
  Vector<int> v1 = {1, 2, 3, 4, 5};

  cout << sqrt_sum(v, 0.0) << "\n";
  cout << sum(v1, 0) << "\n";
}

