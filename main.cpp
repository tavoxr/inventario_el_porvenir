#include <iostream>
#include <stdlib.h>
#include <limits>
#include "Classes/Header_Files/libro.h"
#include "Classes/Header_Files/cliente.h"
#include "Classes/Header_Files/pedido.h"
#include "Classes/Header_Files/detallepedido.h"
#include "Classes/Header_Files/usuario.h"

#include "Modulos/Catalogo_Usuarios/catalogousuarios.h"
#include "Modulos/Catalogo_Clientes/catalogoclientes.h"

#include <fstream>
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


void agregar(ofstream &archivo){
	std::string nombre_usuario;
	std::string telefono; 
	std::string password;
	std::string dpi;
	int tipo_rol;
	
	archivo.open("Catalogo_Usuarios.txt", ios::out | ios::app);
	
	//Obtener datos de Usuario-------------------------------------------------
		std::cout << "===============================" << std::endl;
		std::cout << "Agregar Nuevo Usuario" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
		
			
		std::cout << "Nombre Usuario: ";
		std::cin.ignore(0, '\n');
		getline(std::cin, nombre_usuario);
		
		std::cout << "Telefono: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,telefono);
		
		std::cout << "Password: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,password);
		
		std::cout << "DPI: ";
		std::cin.ignore(0, '\n');
		getline(std::cin,dpi);
		
		std::cout << "Tipo Rol: ";
		std::cin >> tipo_rol;
		
		archivo << nombre_usuario << "-" << telefono << "-" <<password << "-" << dpi << "-" << tipo_rol << "\n";
		archivo.close();
	
	
	
	
	
}


int main() {
	ofstream Archivo;
	
	//declaracion de variables
	CatalogoUsuarios catalogoUsuarios;
	CatalogoClientes catalogoClientes;
	
	
	
	
	int opcion = 0;
	while(opcion != 5 ){
	
	//Menu Opciones
	cout << "Bienvenido al programa de inventario de la biblioteca \"El Porvenir\" " << endl << endl;
	
	cout << "========================================" << endl;
	cout << "      Menu opciones" << endl;
	cout << "========================================" << endl;
	cout << "1. Configuraciones" << endl;
	cout << "2. Ingreso de Inventario" << endl;
	cout << "3. Despacho de Inventario" << endl;
	cout << "4. Reportes" << endl;
	cout << "5. Salir" << endl;
	cout << "========================================" << endl << endl;

	cout << "Selecciona una opcion: " << endl; 

	//Obtener opcion del usuario	
	opcion = fnValidateInteger();
	system("cls");
	
	switch(opcion){
		
			case 1: {
				
			
					int opcionConfig=0;
					
					while(opcionConfig !=5 ){
						
						
						//Menu Configuraciones						
						cout << "========================================" << endl;
						cout << "      Menu opciones de Configuracion" << endl;
						cout << "========================================" << endl;
						cout << "1. Catalogo Usuarios" << endl;
						cout << "2. Catalogo Libros" << endl;
						cout << "3. Catalogo Clientes" << endl;
						cout << "4. Configurar Iva %" << endl;
						cout << "5. Salir" << endl;
						cout << "========================================" << endl << endl;
						
						cout << "Selecciona una opcion: " << endl;	
						opcionConfig =  fnValidateInteger();	
						
						system("cls");
						switch(opcionConfig){
							
								case 1:{
										int opcionCatalogoUsuarios = 0;
										
										while(opcionCatalogoUsuarios !=5 ){
										
										//Catalogo Usuarios						
										cout << "========================================" << endl;
										cout << "      Catalogo Usuarios" << endl;
										cout << "========================================" << endl;
										cout << "1. Ver Usuarios" << endl;
										cout << "2. Agregar Usuario " << endl;
										cout << "3. Editar Usuario" << endl;
										cout << "4. Eliminar Usuario" << endl;
										cout << "5. Salir" << endl;
										cout << "========================================" << endl << endl;
										
										cout << "Selecciona una opcion: " << endl;	
										opcionCatalogoUsuarios =  fnValidateInteger();
										
										switch(opcionCatalogoUsuarios){
											
											
												case 1: {
														int opcionSubmenu = 2;
														do{
														
														
														catalogoUsuarios.listarUsuarios();
														
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
													
													
												
													break;
												}
												case 2:{
														int opcionSubmenu = 2;
														do{
														
													
														catalogoUsuarios.agregarUsuario();
														
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
														
														
														
														
														
													break;
												}
												case 3:{
														int opcionSubmenu = 2;
														int opcionEditarUsuario= 0;
														
														do{
														
														
															catalogoUsuarios.listarUsuarios();
															
															cout << "Selecciona el Id del usuario a editar: " << endl;
															opcionEditarUsuario =  fnValidateInteger();
															
															catalogoUsuarios.editarUsuarios(opcionEditarUsuario);
														
															
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
													
													
														
													break;
												}
												case 4:{
														cout << "dd" << endl;
													break;
												}
												case 5:{
														cout << "dd" << endl;
													break;
												}
												
										} //end switch catalogoUsuarios
										system("cls");
									} //end while catalgoUsuarios
										
									break;
								} 							 
								case 2:{ // CATALOGO LIBROS
								
										int opcionCatalogoLibros = 0;
										//Catalogo Usuarios						
										cout << "========================================" << endl;
										cout << "      Catalogo Libros" << endl;
										cout << "========================================" << endl;
										cout << "1. Ver Libros" << endl;
										cout << "2. Agregar Libro " << endl;
										cout << "3. Editar Libro" << endl;
										cout << "4. Eliminar Libro" << endl;
										cout << "5. Salir" << endl;
										cout << "========================================" << endl << endl;
										
										cout << "Selecciona una opcion: " << endl;	
										opcionCatalogoLibros =  fnValidateInteger();
										
										switch(opcionCatalogoLibros){
											
												case 1: {
													
													
													
													break;
												}
												case 2:{
													
													
												
													break;
												}
												case 3:{
																						
													
													
													
													
													
													
													
													
													
													break;
												}
												case 4:{
													break;
												}
												case 5:{
													break;
												}
											
									
										} //end switch catalogoLibros
									system("cls");	
									break;	
								}
								case 3:{ // Catalogo Clientes 
										
										int opcionCatalogoClientes = 0;
										
										
										while(opcionCatalogoClientes !=5 ){
										
																
										cout << "========================================" << endl;
										cout << "      Catalogo Clientes" << endl;
										cout << "========================================" << endl;
										cout << "1. Ver Clientes" << endl;
										cout << "2. Agregar Cliente " << endl;
										cout << "3. Editar Cliente" << endl;
										cout << "4. Eliminar Cliente" << endl;
										cout << "5. Salir" << endl;
										cout << "========================================" << endl << endl;
										
										cout << "Selecciona una opcion: " << endl;	
										opcionCatalogoClientes =  fnValidateInteger();
										
										switch(opcionCatalogoClientes){
											
											
												case 1: {
														int opcionSubmenu = 2;
														
														do{
														
														catalogoClientes.listarClientes();
														
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
													
													
													
													break;
												}
												case 2:{
														int opcionSubmenu = 2;
														
														do{
														
														catalogoClientes.agregarCliente();
														
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
													
													
													
													break;
												}
												case 3:{
													
														int opcionSubmenu = 2;
														int opcionEditarCliente= 0;
														
														do{
														
															catalogoClientes.listarClientes();
							
															
															cout << "Selecciona el Id del cliente a editar: " << endl;
															opcionEditarCliente =  fnValidateInteger();
															
															catalogoClientes.editarCliente(opcionEditarCliente);
														
															
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
													
													
													break;
												}
												case 4:{
													break;
												}
												case 5:{
													break;
												}
										} //end switch catalogoClientes
									system("cls");	
								}
									break;
								}
								case 4:{
									
										float iva  = 0.12;
										//Configuracion Iva						
										cout << "========================================" << endl;
										cout << "      Configuracion de IVA %" << endl;
										cout << "========================================" << endl;
									
															
									system("cls");
									break;
								}
								 	
								case 5: 
									system("cls");
									break;	
							
						} //end switch configuraciones
						
						

						
					} //end while configuraciones
			
			
				break;
			}
			case 2:
				cout << "Ingreso inventario" << endl;
				break;
			case 3: 
				cout << "Despacho inventario" << endl;
				break;
				
			case 4:
					cout << "Reportes" << endl;
				break;	
			case 5: 
					cout << "salir" << endl;
				break;
				
		
		
		
		
		
	}
	
	/*
	if(opcion == 2){
		
				
				
		int opcionSubmenu = 2;
		
		do{
		
			
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
		
		
		
	}
	
	if(opcion == 4){
		
		//string comida[2] = {"zanahoria","tomate"};
		int codigoSeleccionado=0;
		
		/*()for(Libro libro : libros){
			
			//cout <<  verdura;
		
			cout << "Codigo: "<< libro.getId() << " Titulo: " <<  libro.getTitulo() << endl;
			
			

		}*/
		
	
		
					
		
	}
	
	
		//} //end while
	
	
	
	
	
	
	
	
	
	system("pause");
	
	return 0;	
}
