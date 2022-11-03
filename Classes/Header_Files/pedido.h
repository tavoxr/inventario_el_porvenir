#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
	private:
		
		static int Id;
		int IdPedido;
		int Id_Cliente;
		std::string Fecha;
		float SubTotal;
		float Iva;
		float PrecioTotal;
	
		
	public:
		
		//Default Constructor
		Pedido();
		
		//Custom Constructor
		Pedido( int id_cliente,float subTotal, float iva, float precioTotal);
		
		//Id
		int getId();
		
		//Id_Cliente
		int getIdCliente();
			
		//SubTotal
		void setSubTotal(float subtotal);
		float getSubTotal();
	
		//Iva
		void setIva(float iva);
		float getIva();
		
		//PrecioTotal
		void setPrecioTotal(float precioTotal);
		float getPrecioTotal();


};






#endif
