#include <iostream>
#include <string>
using namespace std;

class VideoJuego {
private:
    string nombre;
    string genero;
    int nivel;
    bool enEjecucion;

public:
    // Constructor
    VideoJuego(string _nombre, string _genero, int _nivel) {
        nombre = _nombre;
        genero = _genero;
        nivel = _nivel;
        enEjecucion = false;
    }

    // Método para jugar
    void jugar() {
        enEjecucion = true;
        cout << "Jugando " << nombre << " del genero " << genero << "..." << endl;
    }

    // Método para subir de nivel
    void subirNivel() {
        if (enEjecucion) {
            nivel++;
            cout << "¡Has subido al nivel " << nivel << "!" << endl;
        } else {
            cout << "No puedes subir de nivel si el juego no esta en ejecucion." << endl;
        }
    }

    // Método adicional 1: pausar el juego
    void pausarJuego() {
        enEjecucion = false;
        cout << "El juego ha sido pausado." << endl;
    }

    // Método adicional 2: mostrar estado del juego
    void mostrarEstado() {
        cout << "Estado del juego: "
             << (enEjecucion ? "En ejecucion" : "Pausado") << endl;
    }

    // Mostrar información completa
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Genero: " << genero << endl;
        cout << "Nivel: " << nivel << endl;
        mostrarEstado();
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Dos instancias diferentes
    VideoJuego juego1("Elden Ring", "RPG", 5);
    VideoJuego juego2("FIFA 24", "Deportes", 2);

    // Probar métodos del primer juego
    juego1.mostrarInfo();
    juego1.jugar();
    juego1.subirNivel();
    juego1.pausarJuego();
    juego1.mostrarInfo();

    // Probar métodos del segundo juego
    juego2.mostrarInfo();
    juego2.jugar();
    juego2.subirNivel();
    juego2.subirNivel();
    juego2.mostrarInfo();

    return 0;
}
