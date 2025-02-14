#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario_correcto = "admin";
    string contraseña_correcta = "1234";

    string usuario, contraseña;

    cout << "Ingresa tu nombre de usuario: ";
    cin >> usuario;

    cout << "Ingresa tu contraseña: ";
    cin >> contraseña;

    if (usuario == usuario_correcto && contraseña == contraseña_correcta) {
        cout << "Acceso concedido" << endl;
    } else if (usuario == usuario_correcto && contraseña != contraseña_correcta) {
        cout << "Contraseña incorrecta" << endl;
    } else {
        cout << "Usuario no registrado" << endl;
    }

    return 0;
}