#include <iostream>

using namespace std;

int main() {
    // Variables
    double nota, suma = 0, promedio;
    int mayoresIguales = 0, menores = 0;
    const int TOTAL_NOTAS = 5;

    // Ciclo for para pedir las 5 notas
    for (int i = 1; i <= TOTAL_NOTAS; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;

        // Variable acumuladora
        suma += nota;

        // Estructura if para contar notas
        if (nota >= 61) {
            mayoresIguales++; // Contador
        } else {
            menores++; // Contador
        }
    }

    // Cálculos
    promedio = suma / TOTAL_NOTAS;

    // Resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Notas mayores o iguales a 61: " << mayoresIguales << endl;
    cout << "Notas menores a 61: " << menores << endl;

    // Estructura if para aprobar/reprobar
    if (promedio >= 61) {
        cout << "Estado: Aprobado" << endl;
    } else {
        cout << "Estado: Reprobado" << endl;
    }

    return 0;
}
