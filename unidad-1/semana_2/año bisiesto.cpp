#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int anio;
    cout << "Ingresa el año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
        cout << "Es bisiesto" << endl;
    else
        cout << "No es bisiesto" << endl;
    getch();
    return 0;
}
