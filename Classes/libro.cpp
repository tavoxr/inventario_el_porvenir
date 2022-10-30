#include "Header_Files/libro.h"
#include <iostream>
#include <stdlib.h>


int Libro::Id=0;

//Default Constructor
Libro::Libro(){
	Titulo = "";
	Autor = "";
	Costo = 0;
	Precio = 0;
	Stock = 0;
	Editorial = "";
	FechaCopy = "";
}


//Constructor
Libro::Libro(std::string titulo, std::string autor, float costo, float precio, int stock, std::string editorial, std::string fechaCopy){
	Id++;
	Titulo = titulo;
	Autor = autor;
	Costo = costo;
	Precio = precio;
	Stock = stock;
	Editorial = editorial;
	FechaCopy = fechaCopy;
	
}

//===============================================================================================================================================================
//																GETTERS & SETTERS
//===============================================================================================================================================================

int Libro::getId(){
	
	return Id;
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


//Precio
void Libro::setPrecio(float precio){
	Precio = precio;
}
float Libro::getPrecio(){
	return Precio;
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

//===============================================================================================================================================================
//															END OF GETTERS & SETTERS
//===============================================================================================================================================================



//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================
Libro Libro::agregarLibro(){
		
		//Declaracion variables
		std::string titulo, autor, editorial,fechaCopy;
		float costo, precio;
		int stock;
		
		//Obtener datos de libro-------------------------------------------------
		std::cout << "===============================" << std::endl;
		std::cout << "Agregar Nuevo Libro" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
		
		
		
		std::cout << "Titulo: ";
		std::cin.ignore();
		getline(std::cin, titulo);
		
		std::cout << "Autor: ";
		std::cin.ignore();
		getline(std::cin,autor);
		
		std::cout << "Costo: ";
		std::cin >> costo;
		
		std::cout << "Precio: ";
		std::cin >> precio;
		
		std::cout << "Stock: ";
		std::cin >> stock;
		
		std::cout << "Editorial: ";
		std::cin.ignore();
		getline(std::cin,editorial);
		
		std::cout << "FechaCopy: ";
		std::cin.ignore();
		getline(std::cin,fechaCopy);
		//--------------------------------------------------
		
		system("cls"); //Limpiar Pantalla
		
		Libro libroNuevo = Libro(titulo,autor,costo,precio,stock,editorial,fechaCopy); //Crear objeto nuevo
		
		
		return libroNuevo; //Retornar objeto libro creado
	
}




//=============================================================================================================================================================
//															END METHODS
//=============================================================================================================================================================
