#include <iostream>
#include <windows.h>;

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size1, size2;

    cout << "Введіть розмір першого масиву: ";
    cin >> size1;
    int* arr1 = new int[size1];

    cout << "Введіть елементи першого масиву:" << endl;
    for (int i = 0; i < size1; i++) {
        cout << "array1[" << i << "]: ";
        cin >> arr1[i];
    }

    cout << "Введіть розмір другого масиву: ";
    cin >> size2;
    int* arr2 = new int[size2];

    cout << "Введіть елементи другого масиву:" << endl;
    for (int i = 0; i < size2; i++) {
        cout << "array2[" << i << "]: ";
        cin >> arr2[i];
    }

    int newSize = size1 + size2;
    int* array_array = new int[newSize];

    for (int i = 0; i < size1; i++) {
        array_array[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        array_array[size1 + i] = arr2[i];
    }

    cout << "Об'єднання масивів: ";
    for (int i = 0; i < newSize; i++) {
        cout << array_array[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] array_array;

    return 0;
}
