#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>


#include "../../Modulos/Catalogo_Clientes/catalogoclientes.h"
#include "../../Modulos/Catalogo_Libros/catalogolibros.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>




class Pedido
{
	private:
		
		static int Id;
		int IdPedido;
		int	Id_Libro;
		int Id_Cliente;
		std::string Fecha;
		int TipoOrden;
		int Cantidad;
		float SubTotal;
		float Iva;
		float PrecioTotal;
	
		
	public:
		
		//Default Constructor
		Pedido();
		
		//Custom Constructor
		Pedido( int id_libro, int id_cliente, int tipo_orden, int cantidad);
		
		//Id
		int getId();
		
		//Id_Libro
		int getIdLibro();
		
		//Id_Cliente
		int getIdCliente();
		
		//TipoOrden
		void setTipoOrden(int tipo_orden);
		int  getTipoOrden();
		
		//Cantidad
		void setCantidad(int cantidad);
		int getCantidad();
			
		//SubTotal
		void setSubTotal(float subtotal);
		float getSubTotal();
	
		//Iva
		void setIva(float iva);
		float getIva();
		
		//PrecioTotal
		void setPrecioTotal(float precioTotal);
		float getPrecioTotal();
		
		
		//--------Metodos ------------------
		
		//Realizar Pedido
		Pedido realizarPedido(CatalogoLibros catalogo_libros, CatalogoClientes catalogo_clientes);
		
		//Editar Pedido
		Pedido editarPedido();

		void configurarPrecios();
};






#endif
