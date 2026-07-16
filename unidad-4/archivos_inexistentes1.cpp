#include <iostream>
#include <fstream>   // Librería para manejo de archivos
#include <string>    // Librería para manejar textos (strings)
#include <stdexcept>
using namespace std;

int main() {
    string nombreArchivo = "documento_secreto.txt";

    // ==========================================
    // PARTE 1: "INVENTAR" (Crear y escribir)
    // ==========================================
    cout << "--- 1. CREANDO ARCHIVO ---\n";
    // ofstream sirve para ESCRIBIR (Output File Stream)
    ofstream archivoSalida(nombreArchivo);

    if (archivoSalida.is_open()) {
        archivoSalida << "REPORTE SECRETO 001\n";
        archivoSalida << "Mision: Aprobar el curso de programacion.\n";
        archivoSalida << "Estado: Codigo funcionando al 100%.\n";
        archivoSalida << "Fin del reporte.\n";
        archivoSalida.close();
        cout << "[EXITO] Archivo inventado y guardado correctamente.\n\n";
    } else {
        cout << "[ERROR] No se pudo crear el archivo.\n\n";
    }


    // ==========================================
    // PARTE 2: LEER (Con manejo de excepciones)
    // ==========================================
    ifstream archivoEntrada; // ifstream sirve para LEER (Input File Stream)
    string linea;            // Variable para guardar cada linea que leamos

    cout << "--- 2. LECTOR DE ARCHIVOS ---\n";
    cout << "Intentando abrir: " << nombreArchivo << "...\n";

    try {
        // Intentamos abrir el archivo que acabamos de crear
        archivoEntrada.open(nombreArchivo);

        // Comprobamos si el archivo NO se abrio correctamente
        if (!archivoEntrada.is_open()) {
            throw runtime_error("EXCEPCION: El archivo no existe o no se tienen los permisos para leerlo.");
        }

        cout << "[EXITO] Archivo abierto correctamente. Leyendo contenido:\n";
        cout << "--------------------------------------------------\n";

        // Bucle que lee el contenido linea por linea hasta que se acabe el archivo
        while (getline(archivoEntrada, linea)) {
            cout << linea << "\n";
        }

        cout << "--------------------------------------------------\n";

        // Siempre cerramos el archivo al terminar
        archivoEntrada.close();

    }
    catch (const exception& e) {
        // Captura el error si pasara algo malo
        cout << e.what() << "\n";
    }

    return 0;
}
