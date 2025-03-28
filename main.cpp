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

int main(int argc, char const *argv[])
{
    Serie serieNavidenia;

   // serieNavidenia.Imprimir();
    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarCantidad(5);
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();
    
    return 0;
}