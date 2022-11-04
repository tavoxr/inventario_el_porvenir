#ifndef CATALOGOUSUARIOS_H
#define CATALOGOUSUARIOS_H

#include "../../Classes/Header_Files/usuario.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
class CatalogoUsuarios
{
		public:
			
			 
			 //Usuario usuarios[50];
			 std::vector<Usuario> usuarios;
			 int largoArray;		
				
				
			//Default Constructor
			CatalogoUsuarios();	
				
			
			//------------------------Methods--------------------
			
			
			 void agregarUsuario();
			 void listarUsuarios();
};

#endif
