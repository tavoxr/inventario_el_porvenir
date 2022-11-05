#ifndef CATALOGOCLIENTES_H
#define CATALOGOCLIENTES_H

#include "../../Classes/Header_Files/cliente.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>



class CatalogoClientes
{
	public:
		
		public:
			
 
			 //Cliente clientes[];
			 std::vector<Cliente> clientes;
			 int largoArray;		
				
				
			//Default Constructor
			CatalogoClientes();
		
			
		//------------------------Methods--------------------
			
			
			 void agregarCliente();
			 void listarClientes();
			 void editarCliente(int id);
			 void eliminarCliente(int id);
		
};

#endif
