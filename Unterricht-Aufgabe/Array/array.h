#ifndef ARRAY_H
#define ARRAY_H

template <class T>
class Array {
private:
  T *values;
  int maxSize;
  int currentSize;


public:
  Array(int size=10);

  ~Array(); // oetterli, nagaratnam
  Array(const Array & obj); // bruderer, kugler
  Array operator= (const Array & obj);

  int size(); // holm, cakan
  void add(T value); // gasser, buergi
  T get(int index, bool & ok); // grolimund, bieli
  void set(int index, T value, bool & ok); // perepelin, christeller
  void remove(int index, bool & ok); // datti
};

#endif
