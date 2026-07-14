#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Inspeccionable {
public:
    virtual void inspeccionar() = 0;
    virtual ~Inspeccionable() {}
};

class Vehiculo : public Inspeccionable {
private:
    string placa;
    string marca;
    string modelo;
    int anio;
    double tarifaAlquilerDia;

public:
    Vehiculo(string _placa, string _marca, string _modelo, int _anio, double _tarifa) {
        placa = _placa;
        marca = _marca;
        modelo = _modelo;
        setAnio(_anio);
        tarifaAlquilerDia = _tarifa > 0 ? _tarifa : 0.0;
    }

    string getPlaca() const { return placa; }
    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getAnio() const { return anio; }
    double getTarifaAlquilerDia() const { return tarifaAlquilerDia; }

    void setAnio(int _anio) {
        if (_anio >= 0 && _anio <= 2026) {
            anio = _anio;
        } else {
            cout << "[Validacion]: Anio invalido (" << _anio << "). Asignando 2026 por defecto.\n";
            anio = 2026;
        }
    }

    void setMarca(string _marca) { marca = _marca; }
    void setModelo(string _modelo) { modelo = _modelo; }
    void setTarifaAlquilerDia(double _tarifa) { if (_tarifa >= 0) tarifaAlquilerDia = _tarifa; }

    virtual double calcularCostoAlquiler(int dias) = 0;

    virtual double calcularCostoAlquiler(int dias, double descuentoAdicional) {
        return calcularCostoAlquiler(dias) - descuentoAdicional;
    }

    virtual void mostrarInformacion() {
        cout << "Vehiculo -> Placa: " << placa << " | " << marca << " " << modelo
             << " (" << anio << ") | Tarifa/Dia: S/. " << tarifaAlquilerDia << "\n";
    }

    virtual ~Vehiculo() {}
};

class Automovil : public Vehiculo {
public:
    Automovil(string p, string ma, string mo, int a, double t)
        : Vehiculo(p, ma, mo, a, t) {}

    double calcularCostoAlquiler(int dias) override {
        return getTarifaAlquilerDia() * dias;
    }

    void inspeccionar() override {
        cout << "[Inspeccion Automovil - " << getPlaca() << "]: Revisando niveles de aceite, luces y pastillas de freno.\n";
    }
};

class Motocicleta : public Vehiculo {
public:
    Motocicleta(string p, string ma, string mo, int a, double t)
        : Vehiculo(p, ma, mo, a, t) {}

    double calcularCostoAlquiler(int dias) override {
        double costoBase = getTarifaAlquilerDia() * dias;
        return costoBase * 0.85;
    }

    void inspeccionar() override {
        cout << "[Inspeccion Motocicleta - " << getPlaca() << "]: Verificando tension de cadena, presion de llantas y kit de herramientas.\n";
    }
};

class Camioneta : public Vehiculo {
public:
    Camioneta(string p, string ma, string mo, int a, double t)
        : Vehiculo(p, ma, mo, a, t) {}

    double calcularCostoAlquiler(int dias) override {
        double costoBase = getTarifaAlquilerDia() * dias;
        return costoBase + 75.0;
    }

    void inspeccionar() override {
        cout << "[Inspeccion Camioneta - " << getPlaca() << "]: Comprobando estado de la tolva, suspension reforzada y neumaticos de carga.\n";
    }
};

int main() {
    cout << "===== SISTEMA DE ALQUILER AUTORENTA PERU =====\n\n";

    vector<Vehiculo*> flota;

    flota.push_back(new Automovil("ABC-123", "Toyota", "Corolla", 2024, 100.0));
    flota.push_back(new Motocicleta("MOT-888", "Honda", "CB190R", 2025, 50.0));
    flota.push_back(new Camioneta("CAM-777", "Toyota", "Hilux", 2029, 180.0));

    int diasDeAlquiler = 4;

    cout << "\n--- Procesando Flota Polimorficamente ---\n\n";
    for (Vehiculo* v : flota) {
        v->mostrarInformacion();
        v->inspeccionar();

        cout << "Costo de alquiler por " << diasDeAlquiler << " dias: S/. "
             << v->calcularCostoAlquiler(diasDeAlquiler) << "\n";

        cout << "--------------------------------------------------------\n";
    }

    cout << "\n[Ejemplo Sobrecarga]: Aplicando descuento extra manual de S/. 20 al Automovil:\n";
    cout << "Nuevo Costo: S/. " << flota[0]->calcularCostoAlquiler(diasDeAlquiler, 20.0) << "\n";

    for (Vehiculo* v : flota) {
        delete v;
    }
    flota.clear();

    return 0;
}
