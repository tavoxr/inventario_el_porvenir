#ifndef CATALOGOPEDIDOS_H
#define CATALOGOPEDIDOS_H


#include "../../Classes/Header_Files/pedido.h"
#include "../../Classes/Header_Files/libro.h"
#include "../../Classes/Header_Files/cliente.h"

#include "../Catalogo_Clientes/catalogoclientes.h"
#include "../Catalogo_Libros/catalogolibros.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


class CatalogoPedidos
{
	public:
		
			 //Pedido pedidos[];
			 std::vector<Pedido> pedidos;
			 std::vector<Pedido> ventas;
			 std::vector<Pedido> prestamos;
			 int largoArray;		
				
				
			//Default Constructor
			CatalogoPedidos();
			
			//Custom Constructor
			//CatalogoPedidos();
		
			
		//------------------------Methods--------------------
			
			
			 void agregarPedido(CatalogoLibros catalogo_libros, CatalogoClientes catalogo_clientes);
			 void listarPedidos();
			 void listarPedidosVentas();
			 void listarPedidosPrestamos();
			 Pedido obtenerPedido(int id);  
			 void editarPedido(int id);
			 void eliminarPedido(int id);
		
		
	
};

#endif
