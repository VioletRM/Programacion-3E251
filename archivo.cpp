#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (int argc, char const *argv[])
{
    ofstream archivo("archivo.txt");

cout << "Escribiendo el archivo..." << endl;
archivo << "Linea 1" << endl;
archivo << "Linea 2" << endl;
archivo << "Linea 3" << endl;
archivo << "Linea 4" << endl;
archivo << "Linea 5" << endl;
archivo << "Linea 6" << endl;

//Abrir el archivo para lectura
ifstream archivoLectura("archivo.txt");
if(!archivoLectura.is_open())
{
    cerr << "error al abrir el archivo para lectura." << endl;
  return 1;  
}
cout << "Leyendo del archivo..." << endl;
string linea;
while(getline(archivoLectura, linea))
{
    cout << linea << endl;
}
//cerrar el archivo
archivoLectura.close();

}