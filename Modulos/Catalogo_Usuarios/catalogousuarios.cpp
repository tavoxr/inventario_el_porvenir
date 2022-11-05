#include "catalogousuarios.h"

#include <iostream>
#include <stdlib.h>
#include <string>

 
CatalogoUsuarios::CatalogoUsuarios(){
	largoArray = 0;
	
	
	
}



//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================



void CatalogoUsuarios::agregarUsuario(){
	
	
	Usuario nuevoUsuario;

	
	nuevoUsuario = nuevoUsuario.crearUsuario();
	
	usuarios.push_back(nuevoUsuario);
	
	//usuarios[largoArray] = nuevoUsuario;
	
	std::cout << "=========================================================================" << std::endl;
			std::cout << "  Usuario Agregado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << usuarios[largoArray].getId() << std::endl;
			std::cout << " Nombre Usuario: " << usuarios[largoArray].getNombreUsuario() << std::endl;
			std::cout << " Correo: " << usuarios[largoArray].getCorreo() << std::endl;
			std::cout << " Telefono: " << usuarios[largoArray].getTelefono()  << std::endl;
			std::cout << " Password: " << usuarios[largoArray].getPassword() << std::endl;
			std::cout << " DPI: " << usuarios[largoArray].getDPI() << std::endl;
			std::cout << " Rol: " << usuarios[largoArray].getTipoRol() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
	
	
	largoArray++;
		
}




void CatalogoUsuarios::listarUsuarios(){
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Listado de Usuarios Registrados  " << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
	
	for(int i=0; i < usuarios.size(); i++){
		
		std::cout << i << ". " << "Id: " << usuarios[i].getId() << "  Nombre: " << usuarios[i].getNombreUsuario() << "  Correo: " << usuarios[i].getCorreo() << "  Telefono: " << usuarios[i].getTelefono() << "  DPI: " << usuarios[i].getDPI() << "  Rol: " << usuarios[i].getTipoRol() << std::endl; 
				
	}

}




void CatalogoUsuarios::editarUsuarios(int id){
	
		std::string nombre_usuario, correo, telefono,password, dpi;
		int tipo_rol;
		
		for(int i=0; i < usuarios.size(); i++){
		
		
		if(usuarios[i].getId() == id ){
			std::cout << i << ". " << std::endl;
			std::cout << "Id: " << usuarios[i].getId() << std::endl;
			std::cout << "Nombre: " << usuarios[i].getNombreUsuario() << std::endl;
			std::cout << "Correo: " << usuarios[i].getCorreo() << std::endl;
			std::cout << "Telefono: " << usuarios[i].getTelefono() << std::endl;
			std::cout << "DPI: " << usuarios[i].getDPI() << std::endl;
			std::cout << "Rol: " << usuarios[i].getTipoRol() << std::endl;	
			
			std::cout << "-----------------------------------------------------" << std::endl;
			std::cout << "	Ingresa los nuevos datos							" << std::endl;
			std::cout << "-----------------------------------------------------" << std::endl << std::endl;
			
			
			std::cout << "Nombre: ";
			std::cin.ignore();
			getline(std::cin, nombre_usuario);
			
			std::cout << "Correo: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,correo);
			
			std::cout << "Telefono: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,telefono);
			
			std::cout << "Password: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,password);
			
			std::cout << "DPI: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,dpi);
			
			std::cout << "Tipo_Rol: ";
			std::cin.ignore(0, '\n');
			std::cin >> tipo_rol;
		
			usuarios[i].setNombreUsuario(nombre_usuario);
			usuarios[i].setCorreo(correo);
			usuarios[i].setTelefono(telefono);
			usuarios[i].setPassword(password);
			usuarios[i].setDPI(dpi);
			usuarios[i].setTipoRol(tipo_rol);
			
			system("cls");
			
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Usuario Editado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << usuarios[i].getId() << std::endl;
			std::cout << " Nombre Usuario: " << usuarios[i].getNombreUsuario() << std::endl;
			std::cout << " Correo: " << usuarios[i].getCorreo() << std::endl;
			std::cout << " Telefono: " << usuarios[i].getTelefono()  << std::endl;
			//std::cout << " Password: " << usuarios[i].getPassword() << std::endl;
			std::cout << " DPI: " << usuarios[i].getDPI() << std::endl;
			std::cout << " Rol: " << usuarios[i].getTipoRol() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
			
		}
		
		 
				
	}
	
	
}


void CatalogoUsuarios::eliminarUsuarios(int id){

		for(int i=0; i < usuarios.size(); i++){
			
			if(usuarios[i].getId() == id){
				
				std::cout << "=========================================================================" << std::endl;
				std::cout << "  Usuario Eliminado Exitosamente" << std::endl;
				std::cout << "=========================================================================" << std::endl << std::endl;
				std::cout << " Id: " << usuarios[i].getId() << std::endl;
				std::cout << " Nombre Usuario: " << usuarios[i].getNombreUsuario() << std::endl;
				std::cout << " Correo: " << usuarios[i].getCorreo() << std::endl;
				std::cout << " Telefono: " << usuarios[i].getTelefono()  << std::endl;
				//std::cout << " Password: " << usuarios[i].getPassword() << std::endl;
				std::cout << " DPI: " << usuarios[i].getDPI() << std::endl;
				std::cout << " Rol: " << usuarios[i].getTipoRol() << std::endl;
				std::cout << "=========================================================================" << std::endl;
				std::cout << std::endl << std::endl << std::endl;
				
				
				usuarios.erase(usuarios.begin() + i);
				
				break;
			}
		}

}





