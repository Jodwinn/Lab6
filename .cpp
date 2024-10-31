#include <windows.h>;
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int* minznach = arr;
    int* maxznach = arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *minznach) {
            minznach = arr + i;
        }
        if (*(arr + i) > *maxznach) {
            maxznach = arr + i;
        }
    }

    cout << "Мінімальне значення в масиві: " << *minznach << endl;
    cout << "Максимальне значення в масиві: " << *maxznach << endl;

    delete[] arr;

    return 0;
}
