#include "Header_Files/cliente.h"
#include <iostream>
#include <stdlib.h>


//variable statica para contabilizar las veces que se instancia la clase
int Cliente::Id = 0;



//Default Constructor
Cliente::Cliente(){
	
	Nombre = "";
	NIT = "";
	Edad = 0;
	Telefono = "";
	
}


//Custom Constructor
Cliente::Cliente(std::string nombre, std::string nit, int edad, std::string telefono){
	Id++;
	IdCliente = Id;
	Nombre =  nombre;
	NIT =  nit;
	Edad = edad;
	Telefono = telefono;
	
}


//===============================================================================================================================================================
//																GETTERS & SETTERS
//===============================================================================================================================================================


// Id
	int Cliente::getId(){
		return IdCliente;
	}
	
//Nombre
	void Cliente::setNombre(std::string nombre){
		Nombre =  nombre;
	}
	
	std::string Cliente::getNombre(){
		
		return Nombre;
	}


//NIT
	void Cliente::setNIT(std::string nit){
		NIT =  nit;
	}
	
	std::string Cliente::getNIT(){
		return NIT;
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
	
	


//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================


Cliente Cliente::crearCliente(){
	
	
		//Declaracion variables
			std::string nombre, nit, telefono;
			int edad;
	
		//Obtener datos de Cliente-------------------------------------------------
		std::cout << "===============================" << std::endl;
		std::cout << "Agregar Nuevo Cliente" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
		
		std::cin.ignore(0, '\n');
		std::cout << "Nombre: ";
		std::cin.ignore();
		getline(std::cin, nombre);
		
		std::cout << "NIT: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,nit);
		
		std::cout << "Edad: ";
		std::cin.ignore(0, '\n');
		std::cin >> edad;
	
	
		std::cout << "Telefono: ";
		std::cin.ignore();
		getline(std::cin,telefono);
		
		
	
	
		system("cls"); //Limpiar Pantalla
		
		Cliente clienteNuevo = Cliente(nombre,nit,edad,telefono); // Cliente Nuevo
		
		return  clienteNuevo;
	
}





