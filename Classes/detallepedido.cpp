#include "Header_Files/detallepedido.h"
#include <iostream>
#include <stdlib.h>


//variable statica para contabilizar las veces que se instancia la clase
int DetallePedido::Id = 0;



//Default Constructor
DetallePedido::DetallePedido(){
		
		Id_Pedido = 0;	
		Id_Libro = 0;
		Tipo_Orden = 1;
		Cantidad = 0;
		PrecioTotal = 0;

};

//Custom Constructor
DetallePedido::DetallePedido(int id_pedido, int id_libro,int tipoOrden,int cantidad, float precioTotal){
		
		Id++;
		IdDetallePedido = Id;
		Id_Pedido = id_pedido;
		Id_Libro = id_libro;
		Tipo_Orden = tipoOrden;
		Cantidad = cantidad;
		PrecioTotal = precioTotal;
	
	
	
};

//===========================================================================================
//								Getters & Setters
//=============================================================================================
//Id
int DetallePedido::getId(){
	
	return IdDetallePedido;
};

//Id_Libro
int DetallePedido::getIdLibro(){
	return Id_Libro;
	
};

//Id_Pedido
int DetallePedido::getIdPedido(){
	return Id_Pedido;
	
};
	
//TipoOrden
void DetallePedido::setTipoOrden(int tipoOrden){
	Tipo_Orden = tipoOrden;
};

int DetallePedido::getTipoOrden(){
	return Tipo_Orden;
};

//Cantidad
void  DetallePedido::setCantidad(int cantidad){
	Cantidad = cantidad;
};

int  DetallePedido::getCantidad(){
	return Cantidad;
};

//PrecioTotal
void  DetallePedido::setPrecioTotal(float precioTotal){
	PrecioTotal = precioTotal;
};

float DetallePedido::getPrecioTotal(){
	return PrecioTotal;
};


