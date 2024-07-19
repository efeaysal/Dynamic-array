// DynamicArray.cpp
#include "DynamicArray.hpp"

DynamicArray::DynamicArray(int initialSize) : size(initialSize) {
    arr = new int[size]; // Bellekte yer ayır
    for (int i = 0; i < size; ++i) {
        arr[i] = 0; // Başlangıçta tüm elemanları sıfırla
    }
}

DynamicArray::~DynamicArray() {
    delete[] arr; // Bellek alanını serbest bırak
}

int DynamicArray::getSize() const {
    return size;
}

void DynamicArray::setValue(int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    } else {
        cout << "Geçersiz indeks!" << endl;
    }
}

int DynamicArray::getValue(int index) const {
    if (index >= 0 && index < size) {
        return arr[index];
    } else {
        cout << "Geçersiz indeks!" << endl;
        return -1; // Hatalı durum için bir değer döndür
    }
}

void DynamicArray::printArray() const {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

