#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct persona
{
    char nombre[50];
    int edad;
};

int main (int argc, char const *argv[])
{
    // abrir el archivo para escritura
    ofstream archivo("binario.bin", ios::binary);
    if(!archivo.is_open())
    {
        cerr << "error al abrir el archivo para escritura." << endl;
        return 1;
    }

    cout << "escribiendo en el archivo..." << endl;
    persona p1 = {"Juan",30};
    persona p2 = {"Maria",25};
    persona p3 = {"Pedro",40};

    archivo.write(reinterpret_cast<char*>(&p1), sizeof(persona));
    archivo.write(reinterpret_cast<char*>(&p2), sizeof(persona));
    archivo.write(reinterpret_cast<char*>(&p3), sizeof(persona));

    archivo.close();

    // abrir el archivo para lectura
    ifstream archivoLectura("binario.bin", ios::binary);
    if(!archivoLectura.is_open())
    {
        cerr << "error al abrir el archivo para lectura." << endl;
        return 1;
    }

    cout << "Leyendo el archivo..." << endl;
    persona p;
    while(archivoLectura.read(reinterpret_cast<char*>(&p), sizeof(persona)))
    {
        cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }

    archivoLectura.close();
    return 0;
}
