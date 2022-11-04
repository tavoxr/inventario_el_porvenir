#include "catalogousuarios.h"

#include <iostream>
#include <stdlib.h>


 
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
		
		std::cout << "Id: " << usuarios[i].getId() << "Nombre: " << usuarios[i].getNombreUsuario() << "Correo: " << usuarios[i].getCorreo() << "Telefono: " << usuarios[i].getTelefono() << "DPI: " << usuarios[i].getDPI() << "Rol: " << usuarios[i].getTipoRol() << std::endl; 
		
		
	}
	
	
	
	
	
	
	
}
