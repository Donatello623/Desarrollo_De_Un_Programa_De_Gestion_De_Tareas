#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> listaTareas;

void menuPrincipal();
void agregarTarea();
void eliminarTarea();
void mostrarTareas();

int main() {
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int opcion;
    do {
        cout << "\n--- Lista de Tareas ---" << endl;
        cout << "1. Agregar tarea" << endl;
        cout << "2. Eliminar tarea" << endl;
        cout << "3. Mostrar tareas" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1:
                agregarTarea();
                break;
            case 2:
                eliminarTarea();
                break;
            case 3:
                mostrarTareas();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida, por favor elija nuevamente." << endl;
        }
    } while(opcion != 4);
}

void agregarTarea() {
    string tarea;
    cout << "Ingrese la tarea: ";
    getline(cin, tarea);
    listaTareas.push_back(tarea);
    cout << "Tarea '" << tarea << "' agregada." << endl;
}

void eliminarTarea() {
    mostrarTareas();
    if (listaTareas.empty()) {
        return;
    }

    int indice;
    cout << "Ingrese el número de la tarea a eliminar: ";
    cin >> indice;

    if (indice > 0 && indice <= listaTareas.size()) {
        string tareaEliminada = listaTareas[indice - 1];
        listaTareas.erase(listaTareas.begin() + (indice - 1));
        cout << "Tarea '" << tareaEliminada << "' eliminada." << endl;
    } else {
        cout << "Número de tarea inválido." << endl;
    }
}

void mostrarTareas() {
    if (listaTareas.empty()) {
        cout << "La lista de tareas está vacía." << endl;
    } else {
        cout << "\n--- Tareas ---" << endl;
        for (size_t i = 0; i < listaTareas.size(); ++i) {
            cout << (i + 1) << ". " << listaTareas[i] << endl;
        }
    }
}
