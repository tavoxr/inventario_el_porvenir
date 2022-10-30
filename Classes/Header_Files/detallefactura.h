#ifndef DETALLEFACTURA_H
#define DETALLEFACTURA_H
#include <string>
class DetalleFactura
{
	private: 
		static int Id;
		int Id_Libro;
		std::string Tipo_Orden;
		int  Cantidad;
		float PrecioTotal;
		
		
		public:
	
		//Default Constructor
		DetalleFactura();
		
		//Custom Constructor
		DetalleFactura(int idLibro,std::string tipoOrden,int cantidad, float precioTotal);
		
		//===========================================================================================
		//								Getters & Setters
		//=============================================================================================
		//Id
		int getId();
	
		//Id_Libro
		int getIdLibro();
			
		//TipoOrden
		void setTipoOrden(std::string);
		std::string getTipoOrden();
		
		//Cantidad
		void setCantidad(int);
		int getCantidad();
		
		//PrecioTotal
		void setPrecioTotal(float);
		float getPrecioTotal();
		
	
	
};

#endif
