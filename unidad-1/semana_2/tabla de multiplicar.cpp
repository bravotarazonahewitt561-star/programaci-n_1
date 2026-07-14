#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
    getch ();
    return 0;
}
