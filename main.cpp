#include <iostream>
#include "Dynamicarray.hpp"
#include <string>
using namespace std;

int main() {
    int initialSize;
        
    // Kullanıcıdan dizinin boyutunu al
    cout << "Dizinin boyutunu girin veya programı kapatmak için lütfen 999 ";
    cin >> initialSize;

    // DynamicArray nesnesi oluştur
    DynamicArray dynamicArray(initialSize);

    // Kullanıcıdan diziye değerler eklemesini iste
    for (int i = 0; i < dynamicArray.getSize(); ++i) {
        int value;
        cout << "Dizi elemanı " << i << " için bir değer girin: ";
        cin >> value;
        dynamicArray.setValue(i, value);
    }

    // Diziyi ekrana yazdır
    cout << "Dizi içeriği: ";
    dynamicArray.printArray();
    
   
    return 0;
}
