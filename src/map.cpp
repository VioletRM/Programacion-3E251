#include <iostream>
#include <string>
#include <map>
using namespace std;

enum TipoPokemon
{
    FUEGO,
    AGUA,
    ELECTRICO,
    PLANTA
};

class pokemon
{
private:
    string nombre;
    int ataque;
    TipoPokemon tipo;
public;
    pokemon(string, nombre,int ataque, TipoPokemon tipo)
    {
        this ->nombre = nombre;
        this ->ataque = ataque;
        this ->tipo = tipo;
    }
};

int main (int argc, char const *argv[])
{
    map<int, pokemon> pokedex;
    pokedex[1]= pokemon("Bulbasaur",1, TipoPokemon::PLANTA);
    pokedex[2]= pokemon("Ivysaur",2, TipoPokemon::PLANTA);
    pokedex[3]= pokemon("Venuasour",3, TipoPokemon::PLANTA);
    pokedex[4]= pokemon("Charmander",1, TipoPokemon::FUEGO);
    pokedex[5]= pokemon("Charmelon",2, TipoPokemon::FUEGO);
    pokedex[6]= pokemon("Charizard",3, TipoPokemon::FUEGO);
    pokedex[7]= pokemon("Squirtle",1, TipoPokemon::AGUA);
    pokedex[8]= pokemon("Wartortle",2, TipoPokemon::AGUA);
    pokedex[9]= pokemon("Blastoise",3, TipoPokemon::AGUA);

    map<string, string> diccionario;
    diccionario["programa"] = "Serie de elementos organizados";
    diccionario["aleatorio"] = "que depende del azar o de la casualidad";






    return 0;
}