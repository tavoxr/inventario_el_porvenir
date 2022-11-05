#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
class Cliente
{
		private: 
			static int Id;
			int IdCliente;
			std::string Nombre;
			std::string NIT;
			int  Edad;
			std::string Telefono;
			
		public:
		
			//Default Constructor
			Cliente();
			
			//Custom Constructor
			Cliente(std::string nombre, std::string nit, int edad, std::string telefono);
			
			//===========================================================================================
			//								Getters & Setters
			//=============================================================================================
			//Id
			int getId();
		
			//Nombre
			void setNombre(std::string);
			std::string getNombre();
				
			//NIT
			void setNIT(std::string);
			std::string getNIT();
			
			//Edad
			void setEdad(int);
			int getEdad();
			
			//Telefono
			void setTelefono(std::string);
			std::string getTelefono();
			
		
			//--------Metodos ------------------
		
			//Agregar Libro
			Cliente crearCliente();
			
};

#endif
