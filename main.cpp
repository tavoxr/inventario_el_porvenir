#include <iostream>
#include <stdlib.h>
#include <limits>
#include "Classes/Header_Files/libro.h"

using namespace std;

//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer
//==============================================================
int fnValidateInteger(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable > 0 && variable < 8)){	
			break;
		}else{
			cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}

//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer para submenu
//==============================================================
int fnValidateIntegerSubmenu(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable >= 0 && variable <= 1)){	
			break;
		}else{
			cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}



int main() {
	
	int opcion = 0;
	Libro libros[1];
	
	
	while(opcion != 7 ){
	
	//Menu Opciones
	cout << "Bienvenido al programa de inventario de la biblioteca \"El Porvenir\" " << endl << endl;
	
	cout << "========================================" << endl;
	cout << "      Menu opciones" << endl;
	cout << "========================================" << endl;
	cout << "1. Ver Inventario" << endl;
	cout << "2. Agregar Libro" << endl;
	cout << "3. Modificar datos libro" << endl;
	cout << "4. Vender Libro" << endl;
	cout << "5. Prestar Libro" << endl;
	cout << "6. Ver Reportes" << endl;
	cout << "7. Salir" << endl;
	cout << "========================================" << endl << endl;

	//Obtener opcion del usuario	
	opcion = fnValidateInteger();
	
	
	
	if(opcion == 2){
		
				
		int opcionSubmenu = 2;
		
		do{
			int contadorLibros=0; 
			
			Libro libroNuevo; // crear variable tipo objeto
			
			libroNuevo = libroNuevo.agregarLibro(); // guardar objeto creado en variable libroNuevo
		
			libros[contadorLibros] = libroNuevo; //agrega nuevo libro a array libros
		
			cout << "=========================================================================" << endl;
			cout << "  Libro Agregado Exitosamente" << endl;
			cout << "=========================================================================" << endl << endl;
			cout << " Id: " << libros[contadorLibros].getId() << endl;
			cout << " Titulo: " << libros[contadorLibros].getTitulo() << endl;
			cout << " Autor: " << libros[contadorLibros].getAutor() << endl;
			cout << " Costo: " << libros[contadorLibros].getCosto() << endl;
			cout << " Precio: " << libros[contadorLibros].getPrecio() << endl;
			cout << " Stock: " << libros[contadorLibros].getStock() << endl;
			cout << " Editorial: " << libros[contadorLibros].getEditorial() << endl;
			cout << " FechaCopy: " << libros[contadorLibros].getFechaCopy() << endl;
			cout << "=========================================================================" << endl;
			cout << endl << endl << endl;
				
			contadorLibros++;
			
			
			//====================================================================================================================	
			//								SUBMENU
			//=====================================================================================================================
			cout << "==========================================================================" << endl;
			cout << "| 0 - Regresar al menu principal       |        1 - Agregar otro Libro  |" << endl;
			cout << "==========================================================================" << endl <<endl;
			cout << " Seleccione una opcion: " << endl; 
			
			opcionSubmenu =  fnValidateIntegerSubmenu();
			
			system("cls");
		}while(opcionSubmenu !=0);
		
		//==============================END DO_WHILE SUBMENU====================================================================
		
		
		
	} // end if 
	
		} //end while
	
	//Libro libros[];
	
	//Agregar Libro
	
	
	
	
	
	
	
	//Libro libro1 = Libro("Harry Potter","dfd",25.5,30.0,10,"marvel","12/10/2022");
	//libros[0] = libro1;
	

	
	
	system("pause");
	
	return 0;	
}
