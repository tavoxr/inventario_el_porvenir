#include "Header_Files/pedido.h"
#include <iostream>
#include <stdlib.h>



//variable statica para contabilizar las veces que se instancia la clase
int Pedido::Id = 0;




//Default Constructor
Pedido::Pedido(){
	
	Fecha = "";
	SubTotal =   0;
	Iva = 0;
	PrecioTotal = 0;
	
}


//Custom Constructor
Pedido::Pedido( int id_cliente,float subTotal, float iva, float precioTotal){
	Id++;
	IdPedido = Id;
	Id_Cliente = id_cliente;
	Fecha = ""  ;
	SubTotal =  subTotal;
	Iva = iva;
	PrecioTotal = precioTotal;
	
}


//===========================================================================================
//								Getters & Setters
//=============================================================================================
	//Id
	int Pedido::getId(){
		return IdPedido;
	};
	
	//Id_Cliente
	int Pedido::getIdCliente(){
		return Id_Cliente;
		
	};
		
	//SubTotal
	void Pedido::setSubTotal(float subtotal){
		
		SubTotal = subtotal;
	};
	
	float Pedido::getSubTotal(){
		return SubTotal;
	};
	
	//Iva
	void Pedido::setIva(float iva){
		Iva = iva;
	};
	
	float Pedido::getIva(){
		return Iva;
		
	};
	
	//PrecioTotal
	void Pedido::setPrecioTotal(float precioTotal){
		PrecioTotal = precioTotal;
	};
	
	float Pedido::getPrecioTotal(){
		return PrecioTotal;
		
	};



