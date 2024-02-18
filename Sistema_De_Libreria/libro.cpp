
#include "libro.h"

Libro::Libro()
{
    Titulo = "N/A";
    Autor = "N/A";
    Año_de_publicacion = 0;
    Disponibilidad = 0;
}

Libro::Libro(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in)
{
    Titulo = titulo_in;
    Autor = autor_in;
    Año_de_publicacion = Año_de_publicacion_in;
    Disponibilidad = disponibilidad_in;
}

void Libro::Prestar(void)
{
    if( Disponibilidad == true )
    {
        Disponibilidad = false;
        cout << "Se prestó un libro" << endl;
    }
    else
        cout << "Libro no disponible" << endl;
}

void Libro::Devolver(void)
{
    if( Disponibilidad == false )
    {
        Disponibilidad = true;
        cout << "Se devolvió un libro" << endl;
    }
    else
        cout << "Libro disponible" << endl;
}

ostream& operator<<(ostream& os,const Libro &obj_in)
{
    os << "Información del libro solicitado" << endl;
    os << "Titulo: " << obj_in.Titulo << endl;
    os << "Autor: " << obj_in.Autor << endl;
    os << "Año de publicación: " << obj_in.Año_de_publicacion << endl;
    os << "Disponibilidad: " << obj_in.Disponibilidad << endl;

    return os;
}
