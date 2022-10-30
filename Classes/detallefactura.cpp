#include "Header_Files/detallefactura.h"
#include <iostream>
#include <stdlib.h>


//variable statica para contabilizar las veces que se instancia la clase
int DetalleFactura::Id = 0;



//Default Constructor
DetalleFactura::DetalleFactura(){
	
		Id_Libro = 0;
		Tipo_Orden = "";
		Cantidad = 0;
		PrecioTotal = 0;

};

//Custom Constructor
DetalleFactura::DetalleFactura(int idLibro,std::string tipoOrden,int cantidad, float precioTotal){
		
		Id++;
		Id_Libro = idLibro;
		Tipo_Orden = tipoOrden;
		Cantidad = cantidad;
		PrecioTotal = precioTotal;
	
	
	
};

//===========================================================================================
//								Getters & Setters
//=============================================================================================
//Id
int DetalleFactura::getId(){
	
	return Id;
};

//Id_Libro
int DetalleFactura::getIdLibro(){
	return Id_Libro;
	
};
	
//TipoOrden
void DetalleFactura::setTipoOrden(std::string tipoOrden){
	Tipo_Orden = tipoOrden;
};

std::string DetalleFactura::getTipoOrden(){
	return Tipo_Orden;
};

//Cantidad
void  DetalleFactura::setCantidad(int cantidad){
	Cantidad = cantidad;
};

int  DetalleFactura::getCantidad(){
	return Cantidad;
};

//PrecioTotal
void  DetalleFactura::setPrecioTotal(float precioTotal){
	PrecioTotal = precioTotal;
};

float DetalleFactura::getPrecioTotal(){
	return PrecioTotal;
};


