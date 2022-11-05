#ifndef CATALOGOLIBROS_H
#define CATALOGOLIBROS_H


#include "../../Classes/Header_Files/libro.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


class CatalogoLibros
{
	public:
			 //Libro libros[];
			 std::vector<Libro> libros;
			 int largoArray;		
				
				
			//Default Constructor
			CatalogoLibros();
		
			
		//------------------------Methods--------------------
			
			
			 void agregarLibro();
			 void listarLibros();
			 void editarLibro(int id);
			 void eliminarLibro(int id);
		
	
};

#endif
