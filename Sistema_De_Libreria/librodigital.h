
#ifndef LIBRODIGITAL_H
#define LIBRODIGITAL_H

#include "libro.h"


class LibroDigital: public Libro
{
private:
    string formato;
public:
    LibroDigital();
    LibroDigital(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in, const string &formato_in);
    string getformato(void) { return formato; }
};

#endif // LIBRODIGITAL_H
