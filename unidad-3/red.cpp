#include <iostream>
#include <string>
using namespace std;
class Moto {
private:
    string modelo;
    int gasolina;

public:
    // 1. CONSTRUCTOR: Recibe el modelo. Pon la gasolina en 0.
    Moto(string _modelo) {
        modelo = _modelo;
        gasolina = 0;
    }

    // 2. GETTER: Completa para que devuelva la gasolina actual
    int getGasolina() const {
    return this->gasolina;
        // Tu código aquí (solo un return)
    }

    // 3. SETTER: Completa para sumar gasolina al tanque
    void recargarGasolina(int cantidad) {
        if (cantidad > 0) {
gasolina += cantidad;
       cout<<"el resultado es: "<<gasolina<<" "<<endl;
            // Suma la cantidad a la gasolina actual
        } else {
            std::cout << "¡No puedes quitarle gasolina a la moto!\n";
        }
    }

    // Getter para el modelo (Ya te lo dejé listo)
    std::string getModelo() const {
        return modelo;
    }
};

int main() {
    // Creamos la moto
    Moto miMoto("Shalon 200");

    cout << "Moto: " << miMoto.getModelo() << "\n";
    cout << "Gasolina inicial: " << miMoto.getGasolina() << " litros\n\n";

    // Le echamos 5 litros
    miMoto.recargarGasolina(5);
    cout << "Gasolina actual: " << miMoto.getGasolina() << " litros\n";

    return 0;
}
