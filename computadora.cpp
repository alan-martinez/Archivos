#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &sistema, const string &ram, const string &nombre, const string &rom)
{
    this->sistema = sistema;
    this->ram = ram;
    this->nombre = nombre;
    this->rom = rom;
}

void Computadora::setSistema(const string &v)
{
    sistema = v;
}

string Computadora::getSistema()
{
    return sistema;
}

void Computadora::setRam(const string &v)
{
    ram = v;
}

string Computadora::getRam()
{
    return ram;
}

void Computadora::setNombre(const string &v)
{
    nombre = v;
}

string Computadora::getNombre()
{
    return nombre;
}

void Computadora::setRom(const string &v)
{
    rom = v;
}

string Computadora::getRom()
{
    return rom;
}