#include "Header_Files/libro.h"
#include <iostream>
#include <stdlib.h>


int Libro::Id=0;

//Default Constructor
Libro::Libro(){
	IdLibro = 0;
	Titulo = "";
	Autor = "";
	Costo = 0;
	PrecioVenta = 0;
	PrecioPrestamo = 0;
	Stock = 0;
	Editorial = "";
	FechaCopy = "";
	Categoria = "";
}


//Constructor
Libro::Libro(std::string titulo, std::string autor, float costo, float precio_venta,float precio_prestamo, int stock, std::string editorial, std::string fechaCopy, std::string categoria ){
	Id++;
	IdLibro = Id;
	Titulo = titulo;
	Autor = autor;
	Costo = costo;
	PrecioVenta = precio_venta;
	PrecioPrestamo = precio_prestamo;
	Stock = stock;
	Editorial = editorial;
	FechaCopy = fechaCopy;
	Categoria = categoria;
	
}

//===============================================================================================================================================================
//																GETTERS & SETTERS
//===============================================================================================================================================================

int Libro::getId(){
	
	return IdLibro;
}


//Titulo
void Libro::setTitulo(std::string titulo){
	
		Titulo = titulo;
}

std::string Libro::getTitulo(){
	
	return Titulo;
}


//Autor
void Libro::setAutor(std::string autor){
	Autor = autor;
}

std::string Libro::getAutor(){
	return Autor;
}


//Costo
void Libro::setCosto(float costo){
	Costo = costo;
}
float Libro::getCosto(){
	return Costo;
}


//Precio Venta
void Libro::setPrecioVenta(float precio_venta){
	PrecioVenta = precio_venta;
}
float Libro::getPrecioVenta(){
	return PrecioVenta;
}

//Precio Prestamo
void Libro::setPrecioPrestamo(float precio_prestamo){
	PrecioPrestamo = precio_prestamo;
}
float Libro::getPrecioPrestamo(){
	return PrecioPrestamo;
}

//Stock
void Libro::setStock(int stock){
	Stock =  stock;
}

int Libro::getStock(){
	return Stock;	
}


//Editorial
void Libro::setEditorial(std::string editorial){
	Editorial = editorial;
}

std::string Libro::getEditorial(){
	return Editorial;
}


//FechaCopy	
void   Libro::setFechaCopy(std::string fechaCopy){
	FechaCopy = fechaCopy;
}

std::string Libro::getFechaCopy(){
	return FechaCopy;
}

//Categoria
void   Libro::setCategoria(std::string categoria){
	Categoria = categoria;
}

std::string Libro::getCategoria(){
	return  Categoria;
}

//===============================================================================================================================================================
//															END OF GETTERS & SETTERS
//===============================================================================================================================================================



//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================
Libro Libro::agregarLibro(){
		
		//Declaracion variables
		std::string titulo, autor, editorial,fechaCopy, categoria;
		float costo, precio_venta, precio_prestamo;
		int stock;
		
		//Obtener datos de libro-------------------------------------------------
		std::cout << "===============================" << std::endl;
		std::cout << "Agregar Nuevo Libro" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
		
		
		
		std::cout << "Titulo: ";
		std::cin.ignore(0, '\n');
		getline(std::cin, titulo);
		
		std::cout << "Autor: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,autor);
		
		std::cout << "Costo: ";
		std::cin >> costo;
		
		std::cout << "Precio de Venta: ";
		std::cin >> precio_venta;
		
		std::cout << "Precio de Prestamo: ";
		std::cin >> precio_prestamo;
		
		std::cout << "Stock: ";
		std::cin >> stock;
		
		std::cout << "Editorial: ";
		std::cin.ignore();
		getline(std::cin,editorial);
		
		std::cout << "FechaCopy: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,fechaCopy);
		
		std::cout << "Categoria: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,categoria);
		//--------------------------------------------------
		
		system("cls"); //Limpiar Pantalla
		
		Libro libroNuevo = Libro(titulo,autor,costo,precio_venta,precio_prestamo,stock,editorial,fechaCopy,categoria); //Crear objeto nuevo
		
		
		return libroNuevo; //Retornar objeto libro creado
	
}



//=============================================================================================================================================================
//															END METHODS
//=============================================================================================================================================================
