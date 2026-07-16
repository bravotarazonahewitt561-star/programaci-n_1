#include <iostream>
#include <string>
using namespace std;

// --- CLASE BASE ---
class Notificacion {
protected: // Protegido para que las clases hijas puedan acceder
    string destinatario;
    string mensaje;
public:
    Notificacion(string dest, string msj) {
        destinatario = dest;
        mensaje = msj;
    }

    // Métodos generales
    virtual void enviar() {
        cout << "Enviando mensaje generico a " << destinatario << "...\n";
    }

    void enviarPrioritario() {
        cout << "[URGENTE] ";
        enviar();
    }

    void reenviar() {
        cout << "[Reintento] ";
        enviar();
    }
};

// --- CLASES TIPO CANAL (Derivadas) ---
class NotificacionCorreo : public Notificacion {
public:
    NotificacionCorreo(string dest, string msj) : Notificacion(dest, msj) {}

    void enviar() override {
        cout << "Enviando EMAIL a <" << destinatario << ">\n";
        cout << "Asunto: Aviso importante\nCuerpo: " << mensaje << "\n";
    }
};

class NotificacionSMS : public Notificacion {
public:
    NotificacionSMS(string dest, string msj) : Notificacion(dest, msj) {}

    void enviar() override {
        cout << "Enviando SMS al numero [" << destinatario << "]\n";
        cout << "Texto: " << mensaje << "\n";
    }
};

class NotificacionToken : public Notificacion {
public:
    NotificacionToken(string dest, string msj) : Notificacion(dest, msj) {}

    void enviar() override {
        cout << "Generando PUSH TOKEN para dispositivo de {" << destinatario << "}\n";
        cout << "Payload: " << mensaje << "\n";
    }
};

// --- PRUEBA DEL SISTEMA ---
int main() {
    cout << "--- SISTEMA MULTICANAL ---\n\n";

    NotificacionCorreo mail("alumno@universidad.edu.pe", "No olvides subir tu codigo a GitHub");
    mail.enviar();
    cout << "\n";

    NotificacionSMS sms("987654321", "Tu codigo de seguridad es 4815");
    sms.enviarPrioritario(); // Hereda el comportamiento prioritario
    cout << "\n";

    NotificacionToken token("User_Android_55", "Tienes una nueva actualizacion de app");
    token.reenviar(); // Hereda la lógica de reintento

    return 0;
}
