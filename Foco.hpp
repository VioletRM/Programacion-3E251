#include <iostream>
#include "EstadoFoco.hpp"


class Foco          
{
private:
    EstadoFoco estado;
   
public:
    //Constructor
    Foco() 
    {

    }  
    //Destructuctor
    ~Foco() 
    {

    } 
    void Encender()
    {
        estado = EstadoFoco::Encendido;
    }
    void Apagar()
    {
        estado = EstadoFoco::Apagado;
    }
    void Imprimir()
    {
        //std::cout << estado;
        switch (estado)
        {
            case EstadoFoco::Encendido:
            std::cout << "*" << std::endl;
            break;
            case EstadoFoco::Apagado:
            std::cout << "o" << std::endl;
            break;

            default: throw "Estado foco no identificado";
            break;
        
        }
    }
    void Alternar () {
        if (estado == EstadoFoco::Encendido)
        {
           estado = EstadoFoco::Apagado;            /* code */
        }else{
        estado = EstadoFoco::Encendido;

        }
    }
};