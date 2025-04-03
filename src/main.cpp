/* #include "Foco.hpp"


int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    foco1.Encender();
    foco2.Apagar();

    foco1.Imprimir();
    foco2.Imprimir();

    return 0;
} */

#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
#include <string>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
//ftxui::Screen pantalla(10,10);
auto pantalla = Screen::Create(
    Dimension::Full(),
    Dimension::Full()

);

int fotograma = 0;
string resetPosition;
while(true){
    auto documento = vbox(
        spinner(21, fotograma)

);
Render(pantalla, documento);
cout << resetPosition;
    pantalla.Print();
    resetPosition = pantalla.ResetPosition();
    fotograma++;

    std::this_thread::sleep_for(0.04s);
}
//     Serie serieNavidenia;

//    // serieNavidenia.Imprimir(); ctr+k+c
//     serieNavidenia.EncenderTodo();
//     serieNavidenia.Imprimir();
//     serieNavidenia.ApagarCantidad(5);
//     serieNavidenia.Imprimir();
//     serieNavidenia.ApagarTodo();
//     serieNavidenia.Imprimir();
    
   return 0;
}