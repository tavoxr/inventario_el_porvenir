#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro
{
	
	private: 
		static int Id;
		std::string Titulo;
		std::string Autor;
		float  Costo;
		float Precio;
		int   Stock;
		std::string Editorial;
		std::string FechaCopy;
		
			
		
		
	public:
		//Default Constructor
		Libro();
		
		//Custom Constructor
		Libro(std::string titulo, std::string autor, float costo, float precio, int stock, std::string editorial, std::string fechaCopy  );
		
		//Id
		int getId();
		
		//Titulo
		void setTitulo(std::string);
		std::string getTitulo();
		
		//Autor
		void setAutor(std::string);
		std::string getAutor();
		
		//Costo
		void setCosto(float);
		float getCosto();
		
		//Precio
		void setPrecio(float);
		float getPrecio();
		
		//Stock
		void setStock(int);
		int getStock();
		
		//Editorial
		void setEditorial(std::string);
		std::string getEditorial();
		
		//FechaCopy	
		void setFechaCopy(std::string);
		std::string getFechaCopy();
		
		//Agregar Libro
		Libro agregarLibro();
		
};

#endif
