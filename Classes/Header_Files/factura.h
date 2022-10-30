#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include <ctime>

class Factura
{
	private: 
			static int Id;
			static std::string Fecha;
			int Id_Cliente;
			float SubTotal;
			float  Iva;
			float PrecioTotal;
			
		public:
		
			//Default Constructor
			Factura();
			
			//Custom Constructor
			Factura(int idCliente,float subTotal, float iva, float precioTotal);
			
			//===========================================================================================
			//								Getters & Setters
			//=============================================================================================
			//Id
			int getId();
		
			//Id_Cliente
			int getIdCliente();
				
			//SubTotal
			void setSubTotal(float);
			float getSubTotal();
			
			//Iva
			void setIva(float);
			float getIva();
			
			//PrecioTotal
			void setPrecioTotal(float);
			float getPrecioTotal();
			
		
};

#endif
