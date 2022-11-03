#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro
{
	
	private: 
		static int Id;
		int IdLibro;
		std::string Titulo;
		std::string Autor;
		float  Costo;
		float PrecioVenta;
		float PrecioPrestamo;
		int   Stock;
		std::string Editorial;
		std::string FechaCopy;
		std::string Categoria;
		
			
		
		
	public:
		//Default Constructor
		Libro();
		
		//Custom Constructor
		Libro(std::string titulo, std::string autor, float costo, float precioVenta,float precioPrestamo, int stock, std::string editorial, std::string fechaCopy, std::string categoria  );
		
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
		
		//Precio Venta
		void setPrecioVenta(float);
		float getPrecioVenta();
		
		//Precio Prestamo
		void setPrecioPrestamo(float);
		float getPrecioPrestamo();
		
		//Stock
		void setStock(int);
		int getStock();
		
		//Editorial
		void setEditorial(std::string);
		std::string getEditorial();
		
		//FechaCopy	
		void setFechaCopy(std::string);
		std::string getFechaCopy();
		
		//Categoria
		void setCategoria(std::string);
		std::string getCategoria();
		
		
		//--------Metodos ------------------
		
		//Agregar Libro
		Libro agregarLibro();
		
		//Editar Libro
		Libro editarLibro();
		
};

#endif
