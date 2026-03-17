#include <iostream>
#include <vector>

using namespace std;

int main() {
    int meses;
    float ahorro, totalAhorrado = 0, promedio, mayorAhorro = 0;
    int mesMayorAhorro = 0, mesesAltos = 0;

    cout << "Ingrese la cantidad de meses a ahorrar: ";
    cin >> meses;

    // Ciclo for para solicitar ahorros
    for(int i = 1; i <= meses; i++) {
        cout << "Ingrese el ahorro del mes " << i << ": Q.";
        cin >> ahorro;

        // Acumulador para total
        totalAhorrado += ahorro;

        // Condicional para detectar mayor ahorro
        if(ahorro > mayorAhorro) {
            mayorAhorro = ahorro;
            mesMayorAhorro = i;
        }

        // Condicional para contar meses con Q.500 o mas
        if(ahorro >= 500) {
            mesesAltos++;
        }
    }

    // Calculos finales
    promedio = totalAhorrado / meses;

    // Resultados
    cout << "\n--- Resumen de Ahorros ---" << endl;
    cout << "Total ahorrado: Q." << totalAhorrado << endl;
    cout << "Promedio ahorrado por mes: Q." << promedio << endl;
    cout << "Mayor ahorro fue en el mes " << mesMayorAhorro << " con: Q." << mayorAhorro << endl;
    cout << "Meses con ahorro de Q.500 o mas: " << mesesAltos << endl;

    return 0;
}
