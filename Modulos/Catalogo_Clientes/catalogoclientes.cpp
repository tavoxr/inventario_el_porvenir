#include "catalogoclientes.h"


#include <iostream>
#include <stdlib.h>
#include <string>

 
CatalogoClientes::CatalogoClientes(){
	largoArray = 0;
	
	
	
}





//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================



void CatalogoClientes::agregarCliente(){
	
	
	Cliente nuevoCliente;

	
	nuevoCliente = nuevoCliente.crearCliente();
	
	clientes.push_back(nuevoCliente);
	
	//clientes[largoArray] = nuevoCliente;
	
	std::cout << "=========================================================================" << std::endl;
			std::cout << "  Cliente Agregado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << clientes[largoArray].getId() << std::endl;
			std::cout << " Nombre: " << clientes[largoArray].getNombre() << std::endl;
			std::cout << " NIT: " << clientes[largoArray].getNIT() << std::endl;
			std::cout << " Edad: " << clientes[largoArray].getEdad()  << std::endl;
			std::cout << " Telefono: " << clientes[largoArray].getTelefono() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
	
	
	largoArray++;
		
}




void CatalogoClientes::listarClientes(){
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Listado de Clientes Registrados  " << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
	
	for(int i=0; i < clientes.size(); i++){
		
		std::cout << i << ". " << "Id: " << clientes[i].getId() << "  Nombre: " << clientes[i].getNombre() << "  NIT: " << clientes[i].getNIT() << "  Edad: " << clientes[i].getEdad() << "  Telefono: " << clientes[i].getTelefono()  << std::endl; 
				
	}

}




void CatalogoClientes::editarCliente(int id){
	
		std::string nombre, nit, telefono;
		int edad;
		
		for(int i=0; i < clientes.size(); i++){
		
		
		if(clientes[i].getId() == id ){
			std::cout << i << ". " << std::endl;
			std::cout << "Id: " << clientes[i].getId() << std::endl;
			std::cout << "Nombre: " << clientes[i].getNombre() << std::endl;
			std::cout << "NIT: " << clientes[i].getNIT() << std::endl;
			std::cout << "Edad: " << clientes[i].getEdad() << std::endl;
			std::cout << "Telefono: " << clientes[i].getTelefono() << std::endl;
			
			std::cout << "-----------------------------------------------------" << std::endl;
			std::cout << "	Ingresa los nuevos datos							" << std::endl;
			std::cout << "-----------------------------------------------------" << std::endl << std::endl;
			
			
			std::cout << "Nombre: ";
			std::cin.ignore(0, '\n');
			getline(std::cin, nombre);
			
			std::cout << "NIT: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,nit);
			
			std::cout << "Edad: ";
			std::cin.ignore(0, '\n');
			std::cin >> edad;
			
			std::cout << "Telefono: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,telefono);
			
		
			clientes[i].setNombre(nombre);
			clientes[i].setNIT(nit);
			clientes[i].setEdad(edad);
			clientes[i].setTelefono(telefono);

			
			system("cls");
			
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Cliente Editado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << clientes[i].getId() << std::endl;
			std::cout << " Nombre: " << clientes[i].getNombre() << std::endl;
			std::cout << " NIT: " << clientes[i].getNIT() << std::endl;
			std::cout << " Edad: " << clientes[i].getEdad()  << std::endl;
			std::cout << " Telefono: " << clientes[i].getTelefono() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
			
		}
		
		 
				
	}
	
	
}


void CatalogoClientes::eliminarCliente(int id){



}

