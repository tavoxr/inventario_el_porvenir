#include "Header_Files/factura.h"
#include <iostream>
#include <stdlib.h>



//variable statica para contabilizar las veces que se instancia la clase
int Factura::Id = 0;
std::string Factura::Fecha = "ds";



//Default Constructor
Factura::Factura(){
	
	Fecha = "";
	SubTotal =   0;
	Iva = 0;
	PrecioTotal = 0;
	
}


//Custom Constructor
Factura::Factura( int idCliente,float subTotal, float iva, float precioTotal){
	Id++;
	Id_Cliente = idCliente;
	Fecha = ""  ;
	SubTotal =  subTotal;
	Iva = iva;
	PrecioTotal = precioTotal;
	
}


//===========================================================================================
//								Getters & Setters
//=============================================================================================
	//Id
	int Factura::getId(){
		return Id;
	};
	
	//Id_Cliente
	int Factura::getIdCliente(){
		return Id_Cliente;
		
	};
		
	//SubTotal
	void Factura::setSubTotal(float subtotal){
		
		SubTotal = subtotal;
	};
	
	float Factura::getSubTotal(){
		return SubTotal;
	};
	
	//Iva
	void Factura::setIva(float iva){
		Iva = iva;
	};
	
	float Factura::getIva(){
		return Iva;
		
	};
	
	//PrecioTotal
	void Factura::setPrecioTotal(float precioTotal){
		PrecioTotal = precioTotal;
	};
	
	float Factura::getPrecioTotal(){
		return PrecioTotal;
		
	};



