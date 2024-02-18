
#include "librodigital.h"

LibroDigital::LibroDigital()
{
    formato = "N/A";
}

LibroDigital::LibroDigital(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in, const string &formato_in)
{
    Titulo = titulo_in;
    Autor = autor_in;
    Año_de_publicacion = Año_de_publicacion_in;
    Disponibilidad = disponibilidad_in;
    formato = formato_in;
}
