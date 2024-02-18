
#include <iostream>
#include <libro.h>
#include <librodigital.h>
#include <biblioteca.h>
using namespace std;

int main()
{
    LibroDigital Libro1("Star Wars The High Republic: Out of The Shadows", "Justina Ireland", 2021, true, "PDF");
    LibroDigital Libro2("Star Wars The High Republic: Into the Dark", "Claudia Gray", 2021, true, "\0");
    Libro Libro3("Star Wars The High Republic: Midnight Horizon", "Daniel Jose Older", 2022, true);
    Biblioteca Mariano_Moreno;

    Mariano_Moreno.agregarLibro("Star Wars The High Republic: Out of The Shadows", "Justina Ireland", 2021, true, "PDF");
    Mariano_Moreno.agregarLibro("Star Wars The High Republic: Into the Dark", "Claudia Gray", 2021, true, "\0");
    Mariano_Moreno.agregarLibro("Star Wars The High Republic: Midnight Horizon", "Daniel Jose Older", 2022, true, "\0");

    Libro1.Prestar();
    Libro2.Prestar();
    Libro3.Prestar();

    Libro1.Devolver();
    Libro2.Devolver();
    Libro3.Devolver();


    Mariano_Moreno.BuscarLibro("Star Wars The High Republic: Out of The Shadows");
    Mariano_Moreno.BuscarLibro("El Eternauta");

    cout << Libro3;

    Mariano_Moreno.MostrarLibrosBiblioteca();


    return 0;
}
