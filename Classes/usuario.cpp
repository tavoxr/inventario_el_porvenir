#include "Header_Files/usuario.h"
#include <iostream>
#include <stdlib.h>


//variable statica para contabilizar las veces que se instancia la clase
int Usuario::Id = 0;

//Default Constructor
Usuario::Usuario(){
	NombreUsuario =  "";
	Telefono =  "";
	Password = "";
	DPI = "";
	TipoRol = 1;
	
}


//Custom Constructor

Usuario::Usuario(std::string nombre_usuario,std::string telefono, std::string password,std::string dpi, int tipo_rol){
	Id++;
	IdUsuario = Id;
	NombreUsuario =  nombre_usuario;
	Telefono =  telefono;
	Password = password;
	DPI = dpi;
	TipoRol = tipo_rol;
	
}


//===============================================================================================================================================================
//																GETTERS & SETTERS
//===============================================================================================================================================================



// Id
int Usuario::getId(){
	return IdUsuario;
}
	
//Nombre_Usuario
void Usuario::setNombreUsuario(std::string nombre_usuario){
	NombreUsuario =  nombre_usuario;
}

std::string Usuario::getNombreUsuario(){
	
	return NombreUsuario;
}


//Correo
void Usuario::setCorreo(std::string correo){
	Correo =  correo;
}

std::string Usuario::getCorreo(){
	return Correo;
}

	
//Telefono
void Usuario::setTelefono(std::string telefono){
	Telefono =  telefono;
}

std::string Usuario::getTelefono(){
	return Telefono;
}

//Password
void Usuario::setPassword(std::string password){
	Password =  password;
}

std::string Usuario::getPassword(){
	return Password;
}

//DPI

void Usuario::setDPI(std::string dpi){
	DPI =  dpi;
}

std::string Usuario::getDPI(){
	return DPI;
}

//Tipo Rol
void Usuario::setTipoRol(int tipo_rol){
	TipoRol = tipo_rol;
}

int Usuario::getTipoRol(){
	return TipoRol;
}	
	




