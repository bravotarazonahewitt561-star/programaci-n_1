#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int x;
    cout << "Ingresa un numero: ";
    cin >> x;

    long long fact = 1;
    for (int i = 2; i <= x; i++)
        fact *= i;

    cout << "Factorial de " << x << " = " << fact << endl;
    getch ();
    return 0;
}
