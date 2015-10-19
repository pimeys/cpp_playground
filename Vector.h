#include <iostream>

template<typename T> class Vector {
  private:
    T* elem;
    unsigned long sz;
  public:
    Vector(std::initializer_list<T>);

    ~Vector() { delete[] elem; }

    T& operator[](int i);
    const T* begin() const;
    const T* end() const;
    const T& operator[](int i) const;
    unsigned long size() const { return sz; }
};
