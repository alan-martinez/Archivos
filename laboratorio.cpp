#include "Laboratorio.h"
#include <fstream>

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c )
{
    if (cont < 5){
        arreglo [cont] = c;
        cont ++;
    }
    else {
        cout << "El arreglo esta lleno! "<< endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "RAM";
    cout << setw(8) << "Nombre";
    cout << setw(6) << "ROM";
    cout << endl;

    for (size_t i=0; i< cont; i++){
        Computadora &p = arreglo [i];

        cout << p;
        //cout << "Sistema: "<< p.getSistema() << endl; 
        //cout << "Ram: "<< p.getRam() << endl; 
        //cout << "Nombre: "<< p.getNombre() << endl; 
        //cout << "Rom: "<< p.getRom() << endl; 
        //cout << endl;
    }
}

void Laboratorio::respaldar_tabla()
{
    
    ofstream archivo ("laboratorio_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(10) << "Sistema";
        archivo << setw(10) << "RAM";
        archivo << setw(8) << "Nombre";
        archivo << setw(6) << "ROM";
        archivo << endl;
        for (size_t i=0; i< cont; i++){
        Computadora &p = arreglo [i];
        archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    
    ofstream archivo ("laboratorio.txt");
    if (archivo.is_open()){
        for (size_t i=0; i< cont; i++){
        Computadora &p = arreglo [i];
        archivo << p.getSistema() << endl;
        archivo << p.getRam() << endl;
        archivo << p.getNombre() << endl;
        archivo << p.getRom() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("laboratorio.txt");
    if(archivo.is_open()){
        string temp;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);//sistema
            if (archivo.eof()){
                break;
            }
            c.setSistema(temp);

            getline(archivo, temp);//RAM
            c.setRam(temp);

            getline(archivo, temp);//Nombre
            c.setNombre(temp);

            getline(archivo, temp);//ROM
            c.setRom(temp);

            agregarComputadora(c);

        }
    }
    archivo.close();
}