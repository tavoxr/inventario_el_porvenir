#include "catalogopedidos.h"


#include <iostream>
#include <stdlib.h>
#include <string>
#include <limits>
 
CatalogoPedidos::CatalogoPedidos(){
	largoArray = 0;
	
	
	
}





void CatalogoPedidos::agregarPedido(CatalogoLibros catalogo_libros, CatalogoClientes catalogo_clientes){
		
			Pedido nuevoPedido;
			nuevoPedido = nuevoPedido.realizarPedido(catalogo_libros, catalogo_clientes);
	
			pedidos.push_back(nuevoPedido);
			
			if(nuevoPedido.getTipoOrden() == 1){
				prestamos.push_back(nuevoPedido);
			}
			
			if(nuevoPedido.getTipoOrden() == 2){
				ventas.push_back(nuevoPedido);
				
			}
				
				
				
			
			
			std::cout << "=========================================================================" << std::endl;
			std::cout << "  Pedido Agregado Exitosamente" << std::endl;
			std::cout << "=========================================================================" << std::endl << std::endl;
			std::cout << " Id: " << pedidos[largoArray].getId() << std::endl;
			std::cout << " IdLibro: " << pedidos[largoArray].getIdLibro() << std::endl;
			std::cout << " IdCliente: " << pedidos[largoArray].getIdCliente() << std::endl;
			std::cout << " Tipo Orden: " << pedidos[largoArray].getTipoOrden()  << std::endl;
			std::cout << " Cantidad: " << pedidos[largoArray].getCantidad() << std::endl;
			std::cout << " SubTotal: " << pedidos[largoArray].getSubTotal() << std::endl;
			std::cout << " IVA: " << pedidos[largoArray].getIva() << std::endl;
			std::cout << " Precio Total: " << pedidos[largoArray].getPrecioTotal() << std::endl;
			std::cout << "=========================================================================" << std::endl;
			std::cout << std::endl << std::endl << std::endl;
	
	
	largoArray++;
	
	
	
}



void CatalogoPedidos::listarPedidos(){
	
		std::cout << "=========================================================================" << std::endl;
		std::cout << "  Listado de Pedidos  " << std::endl;
		std::cout << "=========================================================================" << std::endl << std::endl;
	
	for(int i=0; i < pedidos.size(); i++){
		
		std::string tipo;
		
		 if(pedidos[i].getTipoOrden() == 1){ 
		  tipo = " Prestamo"; 
		 } 
		 else{ 
		  tipo =  " Venta ";
		 };
		
		std::cout << i << ". " << "Id: " << pedidos[i].getId() << "  IdLibro: " << pedidos[i].getIdLibro() << "  IdCliente: " << pedidos[i].getIdCliente() << "  TipoOrden: " << tipo << "  Cantidad: "  << pedidos[i].getCantidad() << "  SubTotal: " << pedidos[i].getSubTotal() << "  IVA:" <<  pedidos[i].getIva() << "  Precio Total: " << pedidos[i].getPrecioTotal() << std::endl; 
				
	}
	
	
	
	
	
	
	
	
}

