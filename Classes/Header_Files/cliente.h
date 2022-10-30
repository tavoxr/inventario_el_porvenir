#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
class Cliente
{
		private: 
			static int Id;
			std::string Nombre;
			std::string Dpi;
			int  Edad;
			std::string Telefono;
			
		public:
		
			//Default Constructor
			Cliente();
			
			//Custom Constructor
			Cliente(std::string nombre, std::string dpi, int edad, std::string telefono);
			
			//===========================================================================================
			//								Getters & Setters
			//=============================================================================================
			//Id
			int getId();
		
			//Nombre
			void setNombre(std::string);
			std::string getNombre();
				
			//DPI
			void setDpi(std::string);
			std::string getDpi();
			
			//Edad
			void setEdad(int);
			int getEdad();
			
			//Telefono
			void setTelefono(std::string);
			std::string getTelefono();
			
		
			
};

#endif
