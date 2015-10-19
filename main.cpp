#include <iostream>
#include <cmath>
#include "Vector.t.hpp"

using namespace std;

double sqrt_sum(const Vector<double>& v)
{
  double sum = 0;

  for (int i = 0; i != v.size(); ++i)
    sum += sqrt(v[i]);

  return sum;
}

int main()
{
  Vector<double> v = {1.1, 1.2, 1.3, 1.4};
  Vector<int> v1 = {1, 2, 3, 4, 5};

  cout << sqrt_sum(v) << "\n";
  cout << sum(v1, 0) << "\n";
}

