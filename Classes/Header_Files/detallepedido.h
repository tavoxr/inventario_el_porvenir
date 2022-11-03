#ifndef DETALLEPEDIDO_H
#define DETALLEPEDIDO_H

#include <string>

class DetallePedido
{
	
private: 
		static int Id;
		int IdDetallePedido;
		int Id_Pedido;
		int Id_Libro;
		int Tipo_Orden;
		int  Cantidad;
		float PrecioTotal;
		
		
		public:
	
		//Default Constructor
		DetallePedido();
		
		//Custom Constructor
		DetallePedido(int id_pedido, int id_libro,int tipoOrden,int cantidad, float precioTotal);
		
		//===========================================================================================
		//								Getters & Setters
		//=============================================================================================
		//Id
		int getId();
	
		//Id_Libro
		int getIdLibro();
		
		//Id_Pedido
		int getIdPedido();
			
		//TipoOrden 1=Prestamo 2=Venta
		void setTipoOrden(int);
		int getTipoOrden();
		
		//Cantidad
		void setCantidad(int);
		int getCantidad();
		
		//PrecioTotal
		void setPrecioTotal(float);
		float getPrecioTotal();
		
	
	
};

#endif
