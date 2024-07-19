// DynamicArray.hpp
#ifndef DYNAMICARRAY_HPP
#define DYNAMICARRAY_HPP

#include <iostream>

using namespace std;

class DynamicArray {
private:
    int* arr;       // Dinamik dizi için pointer
    int size;       // Dizinin mevcut boyutu

public:
    // Yapıcı (Constructor)
    DynamicArray(int initialSize);

    // Yıkıcı (Destructor)
    ~DynamicArray();

    // Dizinin boyutunu döndüren metod
    int getSize() const;

    // Dizinin belirli bir indeksindeki değeri ayarlama metodu
    void setValue(int index, int value);

    // Dizinin belirli bir indeksindeki değeri getirme metodu
    int getValue(int index) const;

    // Diziyi ekrana yazdırma metodu
    void printArray() const;
};

#endif // DYNAMICARRAY_HPP

