#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iomanip>

#include <iostream>
using namespace std;

class Computadora
{
    string sistema;
    string ram;
    string nombre;
    string rom;
public: 
    Computadora();
    Computadora(const string &sistema, const string &ram, const string &nombre, const string &rom);
    void setSistema(const string &v);
    string getSistema();
    void setRam(const string &v);
    string getRam();
    void setNombre(const string &v);
    string getNombre();
    void setRom(const string &v);
    string getRom();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(10) << c.sistema;
        out << setw(10) <<c.ram ;
        out << setw(8) <<c.nombre;
        out << setw(6) <<c.rom;
        out << endl; 

        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c)
    {
        string temp;

        cout << "Sistema: ";
        getline(cin, c.sistema);

        cout << "RAM: ";
        getline(cin, c.ram);

        cout << "Nombre: ";
        getline (cin, c.nombre);

        cout << "ROM: ";
        getline(cin, c.rom);

        return in;
    }
};

#endif