#include <iostream>
#include <cstring>  // Incluye esta cabecera para usar strlen

using namespace std;

int main()
{
    char texto[30];
    char palabra[30];
    int inicio;
    int fin;

    cout << "Ingrese texto: ";
    cin.getline(texto, 30, '\n');

    cout << "Ingrese palabra a buscar: ";
    cin.getline(palabra, 30, '\n');

    int j = 0;
    bool existeP = false;

    while (existeP == false) {
        for (int k = 0; k < strlen(palabra); k++) {
            if (texto[j] == palabra[k]) {
                fin = j;
            } else {
                k = 0;
            }
            j++;
        }
        existeP = true;
    }

    inicio = fin - strlen(palabra) + 1;
    cout << "La palabra inicia en la posicion " << inicio << " y termina en la posicion " << fin;
}
