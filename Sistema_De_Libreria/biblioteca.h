
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "librodigital.h"
#include <vector>
using namespace std;

class Biblioteca
{
private:
    vector<LibroDigital> libros = vector<LibroDigital>(100);
public:
    Biblioteca();
    void agregarLibro(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in, const string &formato_in);
    LibroDigital BuscarLibro(const string &titulo_in);
    void MostrarLibrosBiblioteca(void);



};

#endif // BIBLIOTECA_H
