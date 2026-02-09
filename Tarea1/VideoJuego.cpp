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
    //este es el constructor
    VideoJuego(string _nombre, string _genero, int _nivel) {
        nombre = _nombre;
        genero = _genero;
        nivel = _nivel;
        enEjecucion = false;
    }

    //definiendo el metodo para jugar
    void jugar() {
        enEjecucion = true;
        cout << "Jugando " << nombre << " del genero " << genero << "." << endl;
    }

    //este es el metodo para subir de nivel
    void subirNivel() {
        if (enEjecucion) {
            nivel++;
            cout << "¡Has subido al nivel " << nivel << "!" << endl;
        } else {
            cout << "No puedes subir de nivel si el juego no esta en ejecucion." << endl;
        }
    }

    //metodo para pausar el juego
    void pausarJuego() {
        enEjecucion = false;
        cout << "El juego ha sido pausado." << endl;
    }

    //metodo para mostrar el estado del juego
    void mostrarEstado() {
        cout << "Estado del juego: "
            << (enEjecucion ? "En ejecucion" : "Pausado") << endl;
    }

    //metodo para mostrar toda la informacion 
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Genero: " << genero << endl;
        cout << "Nivel: " << nivel << endl;
        mostrarEstado();
        cout << "---------------------------" << endl;
    }
};

int main() {
    //instancias
    VideoJuego juego1("Fortnite", "Supervivencia", 8);
    VideoJuego juego2("Rocket League", "Racing", 3);

    //probando metodos del juego1
    juego1.mostrarInfo();
    juego1.jugar();
    juego1.subirNivel();
    juego1.pausarJuego();
    juego1.mostrarInfo();

    //probando metodos del juego2
    juego2.mostrarInfo();
    juego2.jugar();
    juego2.subirNivel();
    juego2.subirNivel();
    juego2.mostrarInfo();

    //todo salio bien xd

    return 0;
}
