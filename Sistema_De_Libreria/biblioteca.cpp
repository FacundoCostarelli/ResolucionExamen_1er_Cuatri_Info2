
#include "biblioteca.h"

Biblioteca::Biblioteca()
{

}

void Biblioteca::agregarLibro(const string &titulo_in, const string &autor_in, int Año_de_publicacion_in, bool disponibilidad_in, const string &formato_in)
{
    for (auto& libro: libros)
    {
        if ( libro.Titulo == titulo_in && libro.Autor == autor_in && libro.Año_de_publicacion == Año_de_publicacion_in )
        {
            cout << "Ya existe un libro" << endl;
            return;
        }
    }

    LibroDigital Nuevo_libro(titulo_in,autor_in,Año_de_publicacion_in,disponibilidad_in,formato_in);
    libros.push_back(Nuevo_libro);
    cout << "Se agregó un nuevo libro" << endl;

}
LibroDigital Biblioteca::BuscarLibro(const string &titulo_in)
{
    //long long unsigned int cont = 0;
    for (auto& libro: libros)
    {
        if( libro.Titulo == titulo_in)
        {
            LibroDigital Libro_Encontrado(libro.Titulo,libro.Autor,libro.Año_de_publicacion,libro.Disponibilidad,libro.getformato());
            cout << "Se encontro el libro" << endl;
            return Libro_Encontrado;
        }
        //cont++;
    }

    //if( cont == libros.size() )
    //{
        LibroDigital Libro_Vacio;
        cout << "No se encontro el libro. Se devuelve un libro vacio" << endl;
        return Libro_Vacio;
    //}
}

void Biblioteca::MostrarLibrosBiblioteca(void)
{
    for(int i = 0; i < libros.size(); i++ )
        cout << libros[i] << endl;

    return;
}
