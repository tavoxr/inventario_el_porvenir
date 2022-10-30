#include "Header_Files/cliente.h"
#include <iostream>
#include <stdlib.h>


//variable statica para contabilizar las veces que se instancia la clase
int Cliente::Id = 0;



//Default Constructor
Cliente::Cliente(){
	
	Nombre = "";
	Dpi = "";
	Edad = 0;
	Telefono = "";
	
}


//Custom Constructor
Cliente::Cliente(std::string nombre, std::string dpi, int edad, std::string telefono){
	Id++;
	Nombre =  nombre;
	Dpi =  dpi;
	Edad = edad;
	Telefono = telefono;
	
}


//===============================================================================================================================================================
//																GETTERS & SETTERS
//===============================================================================================================================================================


// Id
	int Cliente::getId(){
		return Id;
	}
	
//Nombre
	void Cliente::setNombre(std::string nombre){
		Nombre =  nombre;
	}
	
	std::string Cliente::getNombre(){
		
		return Nombre;
	}


//Dpi
	void Cliente::setDpi(std::string dpi){
		Dpi =  dpi;
	}
	
	std::string Cliente::getDpi(){
		return Dpi;
	}

//Edad

	void Cliente::setEdad(int edad){
		Edad = edad;
	}
	
	int Cliente::getEdad(){
		return Edad;
	}
	
//Telefono

	void Cliente::setTelefono(std::string telefono){
		Telefono =  telefono;
	}
	
	std::string Cliente::getTelefono(){
		return Telefono;
	}
	
	

