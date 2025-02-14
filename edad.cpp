#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad < 12) {
        cout << "Niño" << endl;
    } else if (edad >= 12 && edad <= 17) {
        cout << "Adolescente" << endl;
    } else if (edad >= 18 && edad <= 59) {
        cout << "Adulto" << endl;
    } else {
        cout << "Adulto mayor" << endl;
    }

    return 0;
}