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
#include "Modulos/Catalogo_Libros/catalogolibros.h"
#include "Modulos/Catalogo_Pedidos/catalogopedidos.h"

#include <fstream>
using namespace std;

//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer
//==============================================================
int fnValidateInteger(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable > 0 && variable < 10)){	
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


//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer para submenu de reportes
//==============================================================
int fnValidateIntegerSubmenuReportes(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable != 0)){	
			break;
		}else{
			cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}




void agregarArchivoUsuarios(ofstream &archivo, CatalogoUsuarios catalogoUsuarios){
	std::string nombre_usuario;
	std::string telefono; 
	std::string password;
	std::string dpi;
	int tipo_rol;
	
	archivo.open("Catalogo_Usuarios.txt", ios::out | ios::app);
	

		for(int i =0; i < catalogoUsuarios.usuarios.size(); i++){
			
			
			archivo << catalogoUsuarios.usuarios[i].getNombreUsuario() << " " << catalogoUsuarios.usuarios[i].getCorreo()  << " "   << catalogoUsuarios.usuarios[i].getTelefono() << " " <<catalogoUsuarios.usuarios[i].getPassword() << " " << catalogoUsuarios.usuarios[i].getDPI() << " " << catalogoUsuarios.usuarios[i].getTipoRol() << "\n";
			
			
		}
	
		
		//archivo << nombre_usuario << "-" << telefono << "-" <<password << "-" << dpi << "-" << tipo_rol << "\n";
		archivo.close();
	
}

/*
void librosArchivo(ofstream &archivo, CatalogoLibros catalogoLibros){

archivo.open("Catalogo_Usuarios.txt", ios::out | ios::app);
	

		for(int i =0; i < catalogoLibros.libros.size(); i++){
			
			
			archivo << catalogoUsuarios.usuarios[i].getNombreUsuario() << " " << catalogoUsuarios.usuarios[i].getCorreo()  << " "   << catalogoUsuarios.usuarios[i].getTelefono() << " " <<catalogoUsuarios.usuarios[i].getPassword() << " " << catalogoUsuarios.usuarios[i].getDPI() << " " << catalogoUsuarios.usuarios[i].getTipoRol() << "\n";
			
			
		}
	
		
		//archivo << nombre_usuario << "-" << telefono << "-" <<password << "-" << dpi << "-" << tipo_rol << "\n";
		archivo.close();

}
*/
void clientesArchivo(ofstream &archivo, CatalogoClientes catalogoClientes){
archivo.open("Catalogo_Clientes.txt", ios::out | ios::app);
	

		for(int i =0; i < catalogoClientes.clientes.size(); i++){
			
			
			archivo << catalogoClientes.clientes[i].getNombre() << " " << catalogoClientes.clientes[i].getNIT()  << " "   << catalogoClientes.clientes[i].getEdad() << " " <<catalogoClientes.clientes[i].getTelefono() << "\n";
			
			
		}
	
		
		//archivo << nombre_usuario << "-" << telefono << "-" <<password << "-" << dpi << "-" << tipo_rol << "\n";
		archivo.close();


}

void pedidosArchivo(ofstream &archivo, CatalogoPedidos catalogoPedidos){
	archivo.open("Catalogo_Pedidos.txt", ios::out | ios::app);
	

		for(int i =0; i < catalogoPedidos.pedidos.size(); i++){
			
			std::string tipo;
		
		 if(catalogoPedidos.pedidos[i].getTipoOrden() == 1){ 
		  tipo = " Prestamo"; 
		 } 
		 else{ 
		  tipo =  " Venta ";
		 };
			
			
			archivo << catalogoPedidos.pedidos[i].getIdLibro() << " " << catalogoPedidos.pedidos[i].getIdCliente()  << " "   << tipo << " " <<catalogoPedidos.pedidos[i].getCantidad() << " " << catalogoPedidos.pedidos[i].getSubTotal() << " " << catalogoPedidos.pedidos[i].getIva() << " " << catalogoPedidos.pedidos[i].getPrecioTotal() << "\n";
			
			
		}
	
		
		//archivo << nombre_usuario << "-" << telefono << "-" <<password << "-" << dpi << "-" << tipo_rol << "\n";
		archivo.close();


}





void leerUsuarios(ifstream &lectura, CatalogoUsuarios catalogoUsuarios){
	
	std::string nombre_usuario;
	std::string correo;
	std::string telefono; 
	std::string password;
	std::string dpi;
	int tipo_rol;
	
	lectura.open("Catalogo_Usuarios.txt", ios::in);
	
	int contador= 0;
	
	
	
	while(!lectura.eof()){
		lectura >> nombre_usuario;
		lectura >> correo;
		lectura >>telefono;
		lectura >> password;
		lectura >> dpi;
		lectura  >> tipo_rol;
		
		
		
		Usuario usuario= Usuario(nombre_usuario,correo,telefono,password,dpi,tipo_rol);
		catalogoUsuarios.usuarios.push_back(usuario);
		
	
	}
	
	lectura.close();
	
	
	
}





int main() {
	ofstream Archivo;
	ofstream librosArchivo;
	ofstream clientesArchivo;
	ofstream pedidosArchivo;
	
	
	ifstream Lectura;
	
	
	
	//vector
	//vector<Pedido> pedidos;
	
	//declaracion de variables
	CatalogoUsuarios catalogoUsuarios;
	CatalogoClientes catalogoClientes;
	CatalogoLibros catalogoLibros;
	CatalogoPedidos catalogoPedidos;
	
	leerUsuarios(Lectura,catalogoUsuarios);
	//agregarArchivoUsuarios(Archivo, catalogoUsuarios);
	
	//Datos Provisionales
	Cliente cliente1 = Cliente("Mario","4563456-7",34,"23455432");
	Cliente cliente2 = Cliente("Rocxana","453456-4",27,"54348934");
	catalogoClientes.clientes.push_back(cliente1);
	catalogoClientes.clientes.push_back(cliente2);
	
	Usuario usuario1 = Usuario("Roger","roger@email.com","44534534","123","3536364362",1);
	Usuario usuario2 = Usuario("Carlos","carlos@email.com","55534534","1098","4326364362",0);
	catalogoUsuarios.usuarios.push_back(usuario1);
	catalogoUsuarios.usuarios.push_back(usuario2);
	
	Libro libro1 = Libro("Lord of the rings","Tolkien",48.5,90.5,2.99,20,"Santillana","1992","Fantasia");
	Libro libro2 = Libro("Hamlet","Shakespeare",28,50.5,1.99,40,"Santillana","1940","Drama");
	catalogoLibros.libros.push_back(libro1);
	catalogoLibros.libros.push_back(libro2);
	
	
	
	int opcion = 0;
	while(opcion != 4 ){
	
	//Menu Opciones
	cout << "Bienvenido al programa de inventario de la biblioteca \"El Porvenir\" " << endl << endl;
	
	cout << "========================================" << endl;
	cout << "      Menu opciones" << endl;
	cout << "========================================" << endl;
	cout << "1. Configuraciones" << endl;
	cout << "2. Despacho de Inventario" << endl;
	cout << "3. Reportes" << endl;
	cout << "4. Salir" << endl;
	cout << "========================================" << endl << endl;

	cout << "Selecciona una opcion: " << endl; 

	//Obtener opcion del usuario	
	opcion = fnValidateInteger();
	system("cls");
	
	switch(opcion){  // SWITCH CONFIGURACIONES
		
			case 1: {
				
			
					int opcionConfig=0;
					
					while(opcionConfig !=4 ){
						
						
						//Menu Configuraciones						
						cout << "========================================" << endl;
						cout << "      Menu opciones de Configuracion" << endl;
						cout << "========================================" << endl;
						cout << "1. Catalogo Usuarios" << endl;
						cout << "2. Catalogo Libros" << endl;
						cout << "3. Catalogo Clientes" << endl;
						cout << "4. Salir" << endl;
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
														cout << "===============================================================================" << endl;
														cout << "| 0 - Regresar al menu catalogo       |        1 - Volver a listar Usuarios  |" << endl;
														cout << "===============================================================================" << endl <<endl <<endl;
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
														cout << "| 0 - Regresar al menu catalogo       |        1 - Agregar otro Usuario  |" << endl;
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
															cout << "| 0 - Regresar al menu catalogo       |        1 - Editar otro Libro  |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
													
														
													break;
												}
												case 4:{
														int opcionSubmenu = 2;
														int opcionEliminarUsuario= 0;
														
														do{
														
														
															catalogoUsuarios.listarUsuarios();
															
															cout << "Selecciona el Id del usuario a eliminar: " << endl;
															opcionEliminarUsuario =  fnValidateInteger();
															
															catalogoUsuarios.eliminarUsuarios(opcionEliminarUsuario);
														
															
															//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "===========================================================================" << endl;
															cout << "| 0 - Regresar al menu catalogo       |        1 - Eliminar otro Usuario  |" << endl;
															cout << "===========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
												
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
										
										while(opcionCatalogoLibros !=5 ){
								
									
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
													
														int opcionSubmenu = 2;
														do{
														
														catalogoLibros.listarLibros();
														
														//====================================================================================================================	
														//								SUBMENU
														//=====================================================================================================================
														cout << "============================================================================" << endl;
														cout << "| 0 - Regresar al menu catalogo       |        1 - Volver a listar libros  |" << endl;
														cout << "============================================================================" << endl <<endl<<endl;
														cout << " Seleccione una opcion: " << endl; 
														
														opcionSubmenu =  fnValidateIntegerSubmenu();
														
															system("cls");
														}while(opcionSubmenu !=0);
													
					
													break;
												}
												case 2:{
														
														int opcionSubmenu = 2;
														do{
														
														catalogoLibros.agregarLibro();
														
														
														//====================================================================================================================	
														//								SUBMENU
														//=====================================================================================================================
														cout << "============================================================================" << endl;
														cout << "| 0 - Regresar al menu catalogo       |        1 - Agregar otro Libro  	|" << endl;
														cout << "============================================================================" << endl <<endl;
														cout << " Seleccione una opcion: " << endl; 
														
														opcionSubmenu =  fnValidateIntegerSubmenu();
														
															system("cls");
														}while(opcionSubmenu !=0);
													
		
												
													break;
												}
												case 3:{ //Editar Libro
														int opcionSubmenu = 2;
														int opcionEditarLibro= 0;
														
														do{
														
															catalogoLibros.listarLibros();
															
															
															cout << "Selecciona el Id del libro a editar: " << endl;
															opcionEditarLibro =  fnValidateInteger();
															
															catalogoLibros.editarLibro(opcionEditarLibro);
															
														
															
															//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "============================================================================" << endl;
															cout << "| 0 - Regresar al menu catalogo       |        1 - Editar otro Libro  	|" << endl;
															cout << "============================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
																				
													
													break;
												}
												case 4:{ //Eliminar Libro
														int opcionSubmenu = 2;
														int opcionEliminarLibro= 0;
														
														do{
														
															catalogoLibros.listarLibros();
															
															cout << endl;
															cout << "Selecciona el Id del libro a eliminar: " << endl;
															opcionEliminarLibro =  fnValidateInteger();
															
															
															catalogoLibros.eliminarLibro(opcionEliminarLibro);
															
														
															
															//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "============================================================================" << endl;
															cout << "| 0 - Regresar al menu catalogo       |        1 - Eliminar otro Libro  	|" << endl;
															cout << "============================================================================" << endl <<endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
												
				
													break;
												}
												case 5:{
													break;
												}
											
									
										} //end switch catalogo Libros
									system("cls");	
							}	//end while catalogo libros
									break;	
								}
								case 3:{ //===================================== Catalogo Clientes ========================================================= 
										
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
											
											
												case 1: { // Listar libros
														int opcionSubmenu = 2;
														
														do{
														
														catalogoClientes.listarClientes();
														
														//====================================================================================================================	
														//								SUBMENU
														//=====================================================================================================================
														cout << "==============================================================================" << endl;
														cout << "| 0 - Regresar al menu catalogo       |        1 - Volver a listar clientes  |" << endl;
														cout << "==============================================================================" << endl <<endl;
														cout << " Seleccione una opcion: " << endl; 
														
														opcionSubmenu =  fnValidateIntegerSubmenu();
														
															system("cls");
														}while(opcionSubmenu !=0);
													
													
													
													break;
												}
												case 2:{// Agregar Cliente
														int opcionSubmenu = 2;
														
														do{
														
														catalogoClientes.agregarCliente();
														
														//====================================================================================================================	
														//								SUBMENU
														//=====================================================================================================================
														cout << "===========================================================================" << endl;
														cout << "| 0 - Regresar al menu principal       |        1 - Agregar otro Cliente  |" << endl;
														cout << "===========================================================================" << endl <<endl<<endl;
														cout << " Seleccione una opcion: " << endl; 
														
														opcionSubmenu =  fnValidateIntegerSubmenu();
														
															system("cls");
														}while(opcionSubmenu !=0);
													
													
													
													break;
												}
												case 3:{ // Editar Cliente
													
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
															cout << "| 0 - Regresar al menu catalogo       |        1 - Editar otro Cliente   |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
													
													break;
												}
												case 4:{ // Eliminar Cliente 
												
														int opcionSubmenu = 2;
														int opcionEliminarCliente= 0;
														
														do{
														
															catalogoClientes.listarClientes();
							
															
															cout << "Selecciona el Id del cliente a eliminar: " << endl;
															opcionEliminarCliente =  fnValidateInteger();
															
															catalogoClientes.eliminarCliente(opcionEliminarCliente);
															cout <<endl;  
															
															//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu catalogo       |        1 - Editar otro Cliente   |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenu();
															
															system("cls");
														}while(opcionSubmenu !=0);
			
																
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
														 	
								case 4: 
									system("cls");
									break;	
							
						} //end switch configuraciones
						
						

						
					} //end while configuraciones
			
			
				break;
			}
		
			case 2:{ // ============================================== DESPACHO INVENTARIO ================================================
					
						
						
					int opcionSubmenu = 2;
					int opcionRealizarPedido= 0;
														
					  do{
						
						
						
						
						
						catalogoPedidos.agregarPedido(catalogoLibros,catalogoClientes);
						
						
						//====================================================================================================================	
						//								SUBMENU
						//=====================================================================================================================
						cout << "==========================================================================" << endl;
						cout << "| 0 - Regresar al menu catalogo       |        1 - Editar otro Cliente   |" << endl;
						cout << "==========================================================================" << endl <<endl;
						cout << " Seleccione una opcion: " << endl; 
						
						opcionSubmenu =  fnValidateIntegerSubmenu();
						
						system("cls");
						}while(opcionSubmenu !=0);
						
				
				
				
				break;
				}
			case 3:{
			
			
					int opcionReportes = 0;
					while(opcionReportes !=6 ){
										
																
																
										cout << "========================================" << endl;
										cout << "      Reportes"      << endl;
										cout << "========================================" << endl;
										cout << "1. Reporte libros por titulo y autor" << endl;
										cout << "2. Reporte completo inventario " << endl;
										cout << "3. Reporte inventario por precio menor a mayor" << endl;
										cout << "4. Reporte de busqueda de libro especifico" << endl;
										cout << "5. Reporte lista de pedidos" << endl;
										cout << "6. Salir" << endl;
										cout << "========================================" << endl << endl;
										
										cout << "Selecciona una opcion: " << endl;	
										opcionReportes =  fnValidateInteger();
				
											switch(opcionReportes){
											
												case 1:{
													
														int opcionSubmenu = 2;
														
														
														do{
														cout << "========================================" << endl;
														cout << "      Reporte libros por titulo y autor "      << endl;
														cout << "========================================" << endl <<endl;
														
														catalogoLibros.listarTituloYAutor();	
														
														
														//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu reportes        |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenuReportes();
															
															system("cls");
														}while(opcionSubmenu !=0);
															
													
													break;
												}
												case 2:{
													
														int opcionSubmenu = 2;
														
														
														do{
														cout << "==========================================" << endl;
														cout << "  Reporte Inventario de libros completo "      << endl;
														cout << "==========================================" << endl <<endl;
														
														catalogoLibros.listarLibros();	
														
														
														//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu reportes        |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenuReportes();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
												
													
													break;
												}
												case 3:{
													
														int opcionSubmenu = 2;
														
														
														do{
														cout << "==========================================" << endl;
														cout << "  Reporte Inventario de libros completo "      << endl;
														cout << "==========================================" << endl <<endl;
														
														catalogoLibros.listarLibros();	
														
														
														//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu reportes        |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenuReportes();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
													
													
													
													
													
													break;
												}
												case 4:{
														int opcionSubmenu = 2;
														int idLibro =0;
														Libro verLibro;
														
														do{
														cout << "========================================================" << endl;
														cout << "  Reporte Inventario Busqueda de un libro en especifico "      << endl;
														cout << "========================================================" << endl <<endl;
														
														catalogoLibros.listarLibros();
														
														cout << endl << endl;
														cout << "Por favor seleccione el id del libro que desea el reporte: " << endl;
														idLibro = fnValidateInteger();
														
														verLibro =  catalogoLibros.obtenerLibro(idLibro);
														
														
														std::cout << " Id: " << verLibro.getId() << std::endl;
														std::cout << " Titulo: " << verLibro.getTitulo() << std::endl;
														std::cout << " Autor: " << verLibro.getAutor() << std::endl;
														std::cout << " Costo: " << verLibro.getCosto()  << std::endl;
														std::cout << " Precio de Venta: " << verLibro.getPrecioVenta() << std::endl;
														std::cout << " Precio de Prestamo: " << verLibro.getPrecioPrestamo() << std::endl;
														std::cout << " Stock: " << verLibro.getStock() << std::endl;
														std::cout << " Editorial: " << verLibro.getEditorial() << std::endl;
														std::cout << " FechaCopyright: " << verLibro.getFechaCopy() << std::endl;
														std::cout << " Categoria: " << verLibro.getCategoria() << std::endl << std::endl;
														
														
														//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu reportes        |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenuReportes();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
													
													
													
													break;
												}
												case 5:{
													int opcionSubmenu = 2;
														
														
														do{
														cout << "==========================================" << endl;
														cout << "  Reporte listado de pedidos "      << endl;
														cout << "==========================================" << endl <<endl;
														
														catalogoPedidos.listarPedidos();
														
														
														//====================================================================================================================	
															//								SUBMENU
															//=====================================================================================================================
															cout << "==========================================================================" << endl;
															cout << "| 0 - Regresar al menu reportes        |" << endl;
															cout << "==========================================================================" << endl <<endl;
															cout << " Seleccione una opcion: " << endl; 
															
															opcionSubmenu =  fnValidateIntegerSubmenuReportes();
															
															system("cls");
														}while(opcionSubmenu !=0);
													
											
													
													
													break;
												}
												case 6:{
													break;
												}
												
											
											
											
											
											
											}
				
				
				
						}
				
				break;
			}
			case 4: {
			
			
			
					agregarArchivoUsuarios(Archivo, catalogoUsuarios);
				//	pedidosArchivo(pedidosArchivo,  catalogoPedidos);
				//	clientesArchivo(clientesArchivo , catalogoClientes);
					system("cls");
					cout << "salir" << endl;
				break;
				
			}
		
		
		
		
	} // END WHILE CONFIGURACIONES
	
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
