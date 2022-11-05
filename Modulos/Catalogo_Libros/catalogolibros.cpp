#include "catalogolibros.h"








#include <iostream>
#include <stdlib.h>
#include <string>

 
CatalogoLibros::CatalogoLibros(){
	largoArray = 0;
	
	
	
}





//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================



void CatalogoLibros::agregarLibro(){
	
	
	Libro nuevoLibro;

	
	nuevoLibro = nuevoLibro.agregarLibro();
	
	libros.push_back(nuevoLibro);
	
	//libros[largoArray] = nuevoLibro;
	
	std::cout << "=========================================================================" << std::endl;
			std::cout << "  Libro Agregado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << libros[largoArray].getId() << std::endl;
			std::cout << " Titulo: " << libros[largoArray].getTitulo() << std::endl;
			std::cout << " Autor: " << libros[largoArray].getAutor() << std::endl;
			std::cout << " Costo: " << libros[largoArray].getCosto()  << std::endl;
			std::cout << " Precio de Venta: " << libros[largoArray].getPrecioVenta() << std::endl;
			std::cout << " Precio de Prestamo: " << libros[largoArray].getPrecioPrestamo() << std::endl;
			std::cout << " Stock: " << libros[largoArray].getStock() << std::endl;
			std::cout << " Editorial: " << libros[largoArray].getEditorial() << std::endl;
			std::cout << " FechaCopyright: " << libros[largoArray].getFechaCopy() << std::endl;
			std::cout << " Categoria: " << libros[largoArray].getCategoria() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
	
	
	largoArray++;
		
}




void CatalogoLibros::listarLibros(){
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Listado de Libros Registrados  " << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
	
	for(int i=0; i < libros.size(); i++){
		
		std::cout << i << ". " << "Id: " << libros[i].getId() << "  Titulo: " << libros[i].getTitulo() << "  Autor: " << libros[i].getAutor() << "  Costo: " << libros[i].getCosto() << "  Precio de Venta: "  << libros[i].getPrecioVenta() << "  Precio de Prestamo: " << libros[i].getPrecioPrestamo() << "  Stock:" <<  libros[i].getStock() << "  Editorial: " << libros[i].getEditorial()   << "  Fecha Copyright: " << libros[i].getFechaCopy() << "  Categoria: " << libros[i].getCategoria()  << std::endl; 
				
	}

}




void CatalogoLibros::editarLibro(int id){
	
		std::string titulo, autor, editorial, fechaCopy, categoria ;
		int stock;
		float costo, precioVenta, precioPrestamo;
		
		
		for(int i=0; i < libros.size(); i++){
		
		
		if(libros[i].getId() == id ){
			std::cout << i << ". " << std::endl;
			std::cout << " Id: " << libros[i].getId() << std::endl;
			std::cout << " Titulo: " << libros[i].getTitulo() << std::endl;
			std::cout << " Autor: " << libros[i].getAutor() << std::endl;
			std::cout << " Costo: " << libros[i].getCosto()  << std::endl;
			std::cout << " Precio de Venta: " << libros[i].getPrecioVenta() << std::endl;
			std::cout << " Precio de Prestamo: " << libros[i].getPrecioPrestamo() << std::endl;
			std::cout << " Stock: " << libros[i].getStock() << std::endl;
			std::cout << " Editorial: " << libros[i].getEditorial() << std::endl;
			std::cout << " FechaCopyright: " << libros[i].getFechaCopy() << std::endl;
			std::cout << " Categoria: " << libros[i].getCategoria() << std::endl;
			
			std::cout << "-----------------------------------------------------" << std::endl;
			std::cout << "	Ingresa los nuevos datos							" << std::endl;
			std::cout << "-----------------------------------------------------" << std::endl << std::endl;
			
			

			std::cout << "Titulo: ";
			std::cin.ignore();
			getline(std::cin, titulo);
			
			std::cout << "Autor: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,autor);
			
			std::cout << "Costo: ";
			std::cin >> costo;
			
			std::cout << "Precio de Venta: ";
			std::cin >> precioVenta;
			
			std::cout << "Precio de Prestamo: ";
			std::cin >> precioPrestamo;
			
			std::cout << "Stock: ";
			std::cin >> stock;
			
			std::cout << "Editorial: ";
			std::cin.ignore();
			getline(std::cin,editorial);
			
			std::cout << "FechaCopy: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,fechaCopy);
			
			std::cout << "Categoria: ";
			std::cin.ignore(0, '\n');
			getline(std::cin,categoria);
			
		
			libros[i].setTitulo(titulo);
			libros[i].setAutor(autor);
			libros[i].setCosto(costo);
			libros[i].setPrecioVenta(precioVenta);
			libros[i].setPrecioPrestamo(precioPrestamo);
			libros[i].setStock(stock);
			libros[i].setEditorial(editorial);
			libros[i].setFechaCopy(fechaCopy);
			libros[i].setCategoria(categoria);
			
			
			
			
			

			
			system("cls");
			
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Libro Editado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << libros[i].getId() << std::endl;
			std::cout << " Titulo: " << libros[i].getTitulo() << std::endl;
			std::cout << " Autor: " << libros[i].getAutor() << std::endl;
			std::cout << " Costo: " << libros[i].getCosto()  << std::endl;
			std::cout << " Precio de Venta: " << libros[i].getPrecioVenta() << std::endl;
			std::cout << " Precio de Prestamo: " << libros[i].getPrecioPrestamo() << std::endl;
			std::cout << " Stock: " << libros[i].getStock() << std::endl;
			std::cout << " Editorial: " << libros[i].getEditorial() << std::endl;
			std::cout << " FechaCopyright: " << libros[i].getFechaCopy() << std::endl;
			std::cout << " Categoria: " << libros[i].getCategoria() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
			
		}
		
		 
				
	}
	
	
}


void CatalogoLibros::eliminarLibro(int id){

	for(int i=0; i < libros.size(); i++){
	
		if(libros[i].getId() == id){
			
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Libro Eliminado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << libros[i].getId() << std::endl;
			std::cout << " Titulo: " << libros[i].getTitulo() << std::endl;
			std::cout << " Autor: " << libros[i].getAutor() << std::endl;
			std::cout << " Costo: " << libros[i].getCosto()  << std::endl;
			std::cout << " Precio de Venta: " << libros[i].getPrecioVenta() << std::endl;
			std::cout << " Precio de Prestamo: " << libros[i].getPrecioPrestamo() << std::endl;
			std::cout << " Stock: " << libros[i].getStock() << std::endl;
			std::cout << " Editorial: " << libros[i].getEditorial() << std::endl;
			std::cout << " FechaCopyright: " << libros[i].getFechaCopy() << std::endl;
			std::cout << " Categoria: " << libros[i].getCategoria() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
			

			libros.erase(libros.begin() + i);
			
			break;
		}
	
	
	}

}

