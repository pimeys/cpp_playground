#include <iostream>
#include <cmath>
#include "Vector.h"

template<typename T> Vector<T>::Vector(std::initializer_list<T> list)
  :elem { new T[list.size()] }, sz { list.size() }
{
  std::copy(list.begin(), list.end(), elem);
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
  return elem[i];
}

template<typename T>
const T* Vector<T>::begin() const
{
  return &elem[0];
}

template<typename T>
const T* Vector<T>::end() const
{
  return begin() + size();
}

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
  for (auto x : c)
    v += x;
  return v;
}

template<typename Container, typename Value>
Value sqrt_sum(const Container& c, Value v)
{
  for (auto x : c)
    v += sqrt(x);
  return v;
}
