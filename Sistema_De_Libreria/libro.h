
#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
using namespace std;

class Libro
{
public:
    string Titulo;
    string Autor;
    int Año_de_publicacion;
    bool Disponibilidad;

    Libro();
    Libro(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in);
    void Prestar(void);
    void Devolver(void);
    friend ostream& operator<<(ostream& os,const Libro &obj_in);
};

#endif // LIBRO_H
