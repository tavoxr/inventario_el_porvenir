#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario
{
	
	private: 
			static int Id;
			int IdUsuario;
			std::string NombreUsuario;
			std::string Correo;
			std::string Telefono;
			std::string Password;
			std::string DPI;
			int TipoRol;
	public:
		//Default Constructor
		Usuario();
		
		//Custom Constructor
		Usuario(std::string nombre_usuario,std::string telefono, std::string password,std::string dpi, int tipo_rol );
		
		
		
	//===========================================================================================
	//								Getters & Setters
	//=============================================================================================
			//Id
			int getId();
		
			//NombreUsuario
			void setNombreUsuario(std::string);
			std::string getNombreUsuario();
			
			//Correo
			void setCorreo(std::string);
			std::string getCorreo();
			
			//Telefono
			void setTelefono(std::string);
			std::string getTelefono();
			
			//Password
			void setPassword(std::string);
			std::string getPassword();
			
			//DPI
			void setDPI(std::string);
			std::string getDPI();
			
			//TipoRol 1=Operario 2=Propietario
			void setTipoRol(int);
			int getTipoRol();
			
		
			
};

#endif
